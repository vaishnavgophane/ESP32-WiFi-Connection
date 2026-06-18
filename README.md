## 🧑‍💻 Author

**Vaishnav Gophane**  
**Embedded Firmware & IoT Developer**
<br>
**Pune, India** 

📫 **Connect:** [Gmail](mr.vaishnavgophane@gmail.com) • [GitHub](https://github.com/vaishnavgophane) • [LinkedIn](https://www.linkedin.com/in/vaishnav-gophane-417686284/)

---
# ESP32 WiFi Connection Demo

This project demonstrates how to connect an ESP-WROOM-32 development board to a Wi-Fi network using the Arduino IDE. The ESP32 successfully connects to both:

- Home Wi-Fi Router
- Mobile Phone Hotspot

Once connected, the ESP32 obtains an IP address and can be used for IoT applications such as web servers, MQTT communication, cloud connectivity, and remote monitoring.

---

## Hardware Used

- ESP-WROOM-32 Development Board
- USB Cable
- Wi-Fi Router or Mobile Hotspot
- Computer with Arduino IDE

---

## Software Requirements

- Arduino IDE
- ESP32 Board Package
- USB Driver (CP210x or CH340, depending on the board)

---

## Features

✔ Connects ESP32 to a Wi-Fi network

✔ Displays connection status through Serial Monitor

✔ Prints assigned IP address

✔ Works with both routers and mobile hotspots

✔ Simple and beginner-friendly example

---

## Circuit Diagram

No external wiring is required.

Simply connect the ESP32 board to your computer using a USB cable.

---

## Upload Instructions

1. Open Arduino IDE.
2. Install the ESP32 board package.
3. Select your ESP32 board from:
   ```
   Tools → Board → ESP32 Arduino → ESP32 Dev Module
   ```
4. Enter your Wi-Fi SSID and password in the code.
5. Connect the ESP32 via USB.
6. Select the correct COM port.
7. Click **Upload**.
8. Open the Serial Monitor at **115200 baud**.

---

## Example Output

```text
Connecting to Wi-Fi...
-----------------------------
Connected to: _____________
IP Address  : _____________
-----------------------------
```

---

## Applications

- Home Automation
- IoT Projects
- MQTT Clients
- Web Servers
- Sensor Data Logging
- Cloud Connectivity

---

## Future Improvements

- Automatic reconnection on Wi-Fi loss
- Multiple Wi-Fi credential support
- Web-based configuration portal
- MQTT integration
- OTA (Over-The-Air) updates
