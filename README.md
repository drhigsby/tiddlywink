# tiddlywink

An angled, unibody QAZ-like 40% keyboard with 38 keys and two optional rotary encoder positions.

## Hardware

| Component | Qty | Notes |
|---|---|---|
| MX Switches | 38 | 5-pin highly recommended |
| Diodes | 38 | SOD-123 |
| Pro Micro or equivalent | 1 | ATmega32U4, USB-C recommended |
| Low Profile Binding Barrels | 5 | https://www.mcmaster.com/93121A330/ |
| RGB LEDs | 10 | Optional — WS2812B-B |
| Rotary Encoder | 1 | Optional — Alps EC11, two positions available |
| Reset Button | 1 | Optional — SMD SW_SPST_SKQG https://www.amazon.com/gp/product/B07JM32QQW/ |

## Firmware

This keyboard runs [VIAL](https://get.vial.today) firmware for live keymap editing.

Firmware source files are in the `firmware/` folder and are also submitted to [vial-qmk](https://github.com/vial-kb/vial-qmk).

To compile:
\`\`\`bash
qmk compile -kb drhigsby/tiddlywink -km vial -c
\`\`\`

## Repository Structure

\`\`\`
tiddlywink/
├── firmware/       # QMK/VIAL firmware source files
├── hardware/       # KiCad schematic and PCB files
├── gerbers/        # Gerber files for PCB fabrication
│   ├── angled/     # Original angled variant
│   └── square/     # Square variant
└── case/           # Case DXF files
\`\`\`
