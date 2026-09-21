# free-fall-photogate-timer
Arduino-based dual photogate system for experimental measurement of gravitational acceleration

## Project Overview
- **Microcontroller:** Arduino Uno R3
- **Sensors:** 2x Slotted Optical IR Photogate Modules
- **Methodology:** Non-blocking hardware interrupts (`attachInterrupt`) capturing `micros()` timestamps on Pins 2 and 3.

## Circuit Mapping
- **Gate 1 (Top):** Signal -> Digital Pin 2
- **Gate 2 (Bottom):** Signal -> Digital Pin 3
- **Power:** 5V and GND shared on breadboard rail

---

## Engineering & Development Log

### Entry 1: Initial Setup & Unboxing
- **Date:** Today
- **Status:** In Progress
- **What was easy:** Setting up the repository structure on GitHub.
- **Problems / Doubts:** Figuring out how to connect the optical sensors to the breadboard and identifying whether the pins output HIGH or LOW when blocked.
- **Next Steps:** Wire Gate 1 to the Arduino and run a single-sensor diagnostic test.
