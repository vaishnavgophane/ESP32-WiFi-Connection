#include <WiFi.h>

const char* ssid = "___________";
const char* password = "____________";

unsigned long lastReconnectAttempt = 0;
const unsigned long reconnectInterval = 5000;

bool wasConnected = false;

void printConnectionInfo()
{
    Serial.println("\n-----------------------------");
    Serial.print("Connected to: ");
    Serial.println(WiFi.SSID());
    Serial.print("IP Address  : ");
    Serial.println(WiFi.localIP());
    Serial.println("-----------------------------");
}

void connectToWiFi()
{
    Serial.print("Connecting to WiFi");

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }

    printConnectionInfo();
    wasConnected = true;
}

void setup()
{
    Serial.begin(115200);

    WiFi.mode(WIFI_STA);
    WiFi.setAutoReconnect(true);
    WiFi.persistent(true);

    connectToWiFi();
}

void loop()
{
    if (WiFi.status() == WL_CONNECTED)
    {
        if (!wasConnected)
        {
            Serial.println("WiFi Reconnected!");
            printConnectionInfo();
            wasConnected = true;
        }
    }
    else
    {
        if (wasConnected)
        {
            Serial.println("WiFi connection lost.");
            wasConnected = false;
        }

        unsigned long currentMillis = millis();

        if (currentMillis - lastReconnectAttempt >= reconnectInterval)
        {
            lastReconnectAttempt = currentMillis;

            Serial.println("Attempting reconnection...");
            WiFi.disconnect();
            WiFi.begin(ssid, password);
        }
    }
}