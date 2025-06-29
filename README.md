# 8051 Seven Segment Display Counter

This project demonstrates a simple implementation of displaying numbers (0–9) sequentially on a 7-segment display using an 8051 microcontroller. The display output is controlled via Port 2 of the microcontroller.

# Project Overview

- Microcontroller: AT89C51 (8051 family)
- Output Device: Common Cathode 7-Segment Display
- Language: C (compiled with Keil μVision)
- Simulation Tool: Proteus 8

The program lights up the 7-segment display to show digits `0` through `9` using their respective segment encodings, with a visible delay between each.

# Files Included

| File Name             | Description                                        |
|------------------------|----------------------------------------------------|
| `seven segments.c`     | Keil C source code for sequential number display   |
| `seven segments.hex`   | Compiled HEX file for Proteus simulation           |

# Circuit Configuration (Proteus)

- P2.0 – P2.7: Connected to segments a–g of the 7-segment display
- Common cathode of the display is grounded

Each value sent to `P2` represents the bit pattern to turn ON specific segments for a given digit.

# Code Explanation

The program writes hardcoded hexadecimal values corresponding to digits `0` through `9`:
```c
SRHSegment = 0xC0; // 0
SRHSegment = 0xF9; // 1
SRHSegment = 0xA4; // 2
...
SRHSegment = 0x90; // 9
