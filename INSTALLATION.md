# 💿 Installation Guide — Zencroo Studio

This guide provides comprehensive, step-by-step instructions to get **Zencroo Studio** up and running on your system.

---

## 💻 1. System Requirements

Before installing, please ensure your system meets the following minimum specifications:

| Requirement | Specification |
| :--- | :--- |
| **Operating System** | Windows 10 or Windows 11 (64-bit recommended) |
| **Storage Space** | Minimum 200 MB of free disk space |
| **Connectivity** | Standard USB Ports (for hardware serial communication) |
| **Memory (RAM)** | 4GB Minimum (8GB Recommended for large dashboards) |

---

## 📥 2. Obtaining the Software

1.  Navigate to the [Official Releases](https://github.com/blurotech/zencroostudio/releases) page.
2.  Download the latest version:
    *   **Installer**: `Zencroo_Studio_v1.0.0_setup.exe` (Recommended)
    *   **Portable**: `Zencroo_Studio_v1.0.0_portable.zip` (No installation required)

---

## 🚀 3. Installation Process

Follow these steps to install the software on your Windows machine:

### Step 1: Initialize Setup
Double-click the downloaded `.exe` or `.msi` file to launch the Zencroo Studio Setup Wizard.

### Step 2: Security Clearance (Optional)
> [!NOTE]
> If Windows SmartScreen displays a "Windows protected your PC" prompt:
> 1. Click on **More info**.
> 2. Click **Run anyway**.

### Step 3: Configuration
Follow the on-screen instructions. You will be asked to:
*   Accept the User Agreement.
*   Choose your installation directory (Default: `C:\Program Files\Zencroo Studio`).

### Step 4: Finalize
Click **Install**. Once the extraction is complete, ensure "Create Desktop Shortcut" is checked and click **Finish**.

---

## 🔌 4. Peripheral Drivers (COM Ports)

Zencroo Studio interfaces with hardware via Serial (COM) ports. For the software to "see" your device, your system must have the appropriate drivers installed.

*   **Standard Boards**: Most modern microcontrollers use standard drivers that Windows 10/11 installs automatically.
*   **Custom Hardware**: If your device (Arduino, ESP32, etc.) does not appear in the port list, you may need to manually install:
    *   **CH340/CH341 Drivers** (Common for budget clones)
    *   **CP210x USB to UART Bridge**
    *   **FTDI VCP Drivers**

> [!TIP]
> Always check your device's COM port status in the **Windows Device Manager** if it is not appearing in the Studio.

---

## 🏁 5. Launching the App

1.  Open **Zencroo Studio** via the Desktop shortcut or Start Menu.
2.  Plug in your hardware.
3.  In the **Left Sidebar**, select the correct **COM Port** and **Baud Rate**.
4.  Click **Connect** (`Ctrl + K`).

---
**Need Help?**  
Refer to the **README.md** or use the **Help** menu inside the application for quick assistance.

*Developed by Bluro Technology Solutions*
