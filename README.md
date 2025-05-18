# Communication-between-Physically-Challenged

This Arduino project allows a user to input Morse code using a push button. The LED and buzzer provide real-time visual and audio feedback corresponding to dots and dashes.

## Components Used

- Arduino Uno (or compatible board)
- Push Button
- LED
- Buzzer
- 220Ω resistor (for LED)
- 10kΩ resistor (for button pull-down or pull-up)
- Breadboard and jumper wires

## Wiring Diagram

| Component     | Arduino Pin |
|---------------|-------------|
| Push Button   | 12          |
| LED           | 10          |
| Buzzer        | 9           |

## How to Use

1. Wire the components as described.
2. Upload the sketch (file.app) to your Arduino board.
3. Press and hold the button to enter Morse code:
   - Short press: dot (`.`)
   - Long press: dash (`-`)
4. Observe LED and buzzer for real-time feedback.
