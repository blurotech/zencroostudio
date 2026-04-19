# Changelog

All notable changes to this project will be documented in this file. The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/), and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [1.0.0] - 2026-04-19
### Added
- **Initial Stable Launch**: Full feature set enabled for offline hardware monitoring.
- **Tauri 2.0 Integration**: Migration to the latest Tauri core for improved security and performance.
- **Dynamic Widget Engine**: Support for Line Graphs, Gauges, Switches, and LED indicators.
- **High-Precision Logging**: CSV export functionality with microsecond-level timestamping.
- **Multi-Baud Support**: Reliable communication from 300 to 230400 baud.
- **Sample Hardware Integration**: Ready-to-use Arduino firmware for HTU21D, MPU6050, and I2C Scanner.

### Changed
- **UI Architecture**: Complete refresh of sidebar and toolbar icons for a more professional "Studio" look.
- **Data Parsing**: Enhanced UTF-8 decoding for more robust handling of raw serial streams.

### Fixed
- Resolved handshake delays with Arduino Nano and Uno R3 devices.
- Fixed floating-point rounding errors in the Gauge and Horizontal Bar widgets.
- Corrected UI scaling behavior on high-DPI (4K) Windows displays.
- Patched a critical crash occurring during port disconnection while active data streaming was in progress.

---
**Bluro Technology Solutions**
