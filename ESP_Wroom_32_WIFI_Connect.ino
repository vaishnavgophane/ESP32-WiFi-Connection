#include <WiFi.h>

const char* ssid = "___________"; // Wifi name
const char* password = "____________"; // Wifi Password

void setup() {
  Serial.begin(115200);   // Debugging via USB for Serial Monitor
  delay(1000);

  WiFi.begin(ssid, password);
  Serial.print("Connecting to Wi-Fi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\n-----------------------------");
  Serial.print("Connected to: ");
  Serial.println(WiFi.SSID());
  Serial.print("IP Address  : ");
  Serial.println(WiFi.localIP());
  Serial.println("-----------------------------");
}

void loop() {

}
