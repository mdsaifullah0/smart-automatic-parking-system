# 🚗 Smart Automatic Parking System (Arduino & Proteus Simulation)

An automated microcontroller-based smart parking management system that detects available parking slots, manages gate barriers automatically, and displays real-time slot occupancy.

---

## 📌 Features
- **Automated Entry/Exit Gate:** Controls servo motor gate barrier automatically based on vehicle detection.
- **Real-Time Slot Monitoring:** Uses IR sensors to detect whether parking slots are vacant or occupied.
- **Display System:** Displays available slots on an LCD display (16x2).
- **Proteus Circuit Simulation:** Complete schematic and simulation file (`.pdsprj`) included for virtual testing.

---

## 🛠️ Hardware & Components (Simulated)
* **Microcontroller:** Arduino Uno / ATmega328P
* **Sensors:** IR Proximity Sensors (Entry, Exit & Slot detection)
* **Actuators:** Servo Motor (Barrier Gate)
* **Display:** 16x2 LCD Display (I2C interface)
* **Software:** Arduino IDE & Proteus Professional

---

## 📂 Project Structure
* `automatic_parking_sys/`: Contains `automatic_parking_sys.ino` (Arduino source code).
* `Automatic_parking_system.pdsprj`: Proteus schematic and circuit simulation project.

---

## 🚀 How to Run the Simulation
1. **Open Arduino IDE:** Open `automatic_parking_sys.ino` and export/compile the `.hex` file.
2. **Open Proteus:** Launch `Automatic_parking_system.pdsprj` in Proteus Design Suite.
3. **Load Hex File:** Double-click the Arduino Uno in Proteus and load the compiled `.hex` file.
4. **Run Simulation:** Click the **Play** button at the bottom-left of Proteus to simulate vehicle entry, slot tracking, and gate opening.
