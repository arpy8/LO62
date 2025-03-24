# LO62

![image](https://github.com/user-attachments/assets/2a3e6b98-7d28-4349-814b-14805d85d352)
[![Medium](https://img.shields.io/badge/Medium_Article-12100E?style=for-the-badge&logo=medium&logoColor=white)]()

### **Project Overview**  
LO62 is my electric ripstick project that I've been planning to build for almost 2 years now. I am using an ESP32 to control the BLDC motor and a timing belt mechanism. I also developed a mobile app using react native which you can find inside the [app](./app) directory for contrlling the motor's speed in various ways.

I had planned to control the motor using a hand controller made from flex sensors as well but later dropped the idea because the onboard ESP32 couldn't handle both ble and esp-now at the same time due to limited space.

[Video for reference](https://www.reddit.com/r/developersIndia/comments/1huevbl/heres_me_controlling_a_bldc_motor_with_my_hand/?utm_source=share&utm_medium=web3x&utm_name=web3xcss&utm_term=1&utm_content=share_button)

All source files, firmware and CAD designs are available in this repository. Acha, I also wrote a medium article sharing my journey so you can check that out as well. Alright bye.

[![Medium](https://img.shields.io/badge/Medium_Article-12100E?style=for-the-badge&logo=medium&logoColor=white)]()

## Materials Used
| Product        | Link |
|---------------|------|
| Motor        | [Turnigy Aerodrive SK3 6364 213KV Brushless Outrunner Motor](https://hobbyking.com/turnigy-aerodrive-sk3-6364-213kv-brushless-outrunner-motor.html) |
| Battery      | [Orange 2200mAh 4S 40C/80C Lithium Polymer Battery Pack (LiPo)](https://robu.in/product/orange-2200mah-4s-40c80c-lithium-polymer-battery-pack-lipo/) |
| Battery Charger | [ISDT PD60 60W 6A Portable 1-4S Li-Po Balance Charger](https://robu.in/product/isdt-pd60-60w-6a-portable-1-4s-li-po-balance-charger/) |
| Timing Belt  | [5M Timing Belt Open Ended 10mm Width](https://www.amazon.in/5Mters-Timing-Ended-Pitch-Industrial/dp/B09M6RQJPD) |
| ESC 80A      | [ReadytoSky 80A ESC 2-6S Brushless ESC Speed Controller for RC Drone](https://robu.in/product/readytosky-80a-esc-2-6s-brushless-esc-speed-controller-for-rc-drone/) |
| 3D Prints    | [LO62 CAD Files (GitHub)](https://github.com/arpy8/LO62/tree/main/cad-files) |
| ESP32        | [ESP-WROOM-32 WiFi Bluetooth Development Board](https://robu.in/product/esp-wroom-32-wifi-bluetooth-networking-smart-component-development-board/) |

### **Diagram** 
![image](https://github.com/user-attachments/assets/19743fbb-09a6-4a43-8919-20de5db536ae)

### **Software & Firmware**  
- [Client Side Mobile App](./app)  
- [ESP32 Firmware Code](./firmware)

###  **License**  
- [MIT License](./LICENSE)
