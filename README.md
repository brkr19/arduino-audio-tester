# Arduino buzzer demo

Plays a song on a piezo buzzer using an ESP32-C6 dev module, programmed with Arduino IDE.

---

## Wiring

| Piezo pin | Wire   | ESP32-C6 pin |
|-----------|--------|--------------|
| GND       | Brown  | GND          |
| VCC       | Red    | 3V3          |
| I/O       | Orange | GPIO 5       |

---

## Setup

### 1. Install Arduino IDE

Download and install **Arduino IDE 2** from [arduino.cc/en/software](https://www.arduino.cc/en/software). Available for Windows, macOS, and Linux.

### 2. Add ESP32 board support

The ESP32-C6 is not included with Arduino IDE by default. You need to add Espressif's board package.

1. Open Arduino IDE and go to **File → Preferences** (macOS: **Arduino IDE → Settings**)
2. In the **Additional boards manager URLs** field, paste:
   ```
   https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
   ```
3. Click **OK**
4. Go to **Tools → Board → Boards Manager**
5. Search for `esp32` and install the package by **Espressif Systems**
6. Wait for the installation to finish (it downloads several hundred MB)

### 3. Select your board

1. Go to **Tools → Board → esp32 → ESP32C6 Dev Module**
2. Go to **Tools → Port** and select the COM port your ESP32-C6 is connected to
   - On Windows this will look like `COM3` or similar
   - On macOS/Linux it will look like `/dev/cu.usbserial-...` or `/dev/ttyUSB0`
   - If you don't see a port, you may need to install a USB-to-serial driver — see [Troubleshooting](#troubleshooting) below

### 4. Upload the sketch

1. Open `demo.ino` (or paste the code into a new sketch)
2. Click the **Upload** button (→ arrow in the toolbar)
3. Arduino IDE will compile and flash the code to your board
4. The buzzer should start playing after a few seconds

---

## Troubleshooting

**No port appears in Tools → Port**

The ESP32-C6 dev module uses a USB-to-serial chip that may require a driver:

- **CH340/CH341** — install from [wch-ic.com](https://www.wch-ic.com/downloads/CH341SER_EXE.html)
- **CP2102** — install from [silabs.com](https://www.silabs.com/developer-tools/usb-to-uart-bridge-vcp-drivers)

Check the markings on the small chip nearest the USB port on your board to identify which one you have.

**Upload fails with "connecting..." timeout**

Some ESP32-C6 boards require you to manually enter bootloader mode:

1. Hold the **BOOT** button on the board
2. Press and release **RESET**
3. Release **BOOT**
4. Try uploading again

**No sound from buzzer**

- Double-check wiring against the table above — swapped GND/VCC will damage the piezo
- Confirm **GPIO 5** is selected in the code (`#define BUZZER 5`)
- Try a different USB cable (some cables are charge-only and carry no data)
