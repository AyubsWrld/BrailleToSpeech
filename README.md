# Braille-to-Speech Project using Capacitive Touch Sensor and ESP32

This project converts Braille input into speech using capacitive touch sensors and the ESP32 microcontroller. The system detects Braille patterns from touch input, processes them, and generates corresponding speech using a text-to-speech engine. This project is aimed at creating an assistive tool for individuals with visual impairments.
## Overview

This project demonstrates how a Braille input system can be transformed into a speech output device using an ESP32 and capacitive touch sensors. When a user taps on specific points representing Braille characters, the system recognizes the pattern, converts it into the corresponding letter, and then reads it aloud using a speaker.

## Hardware Components

- **ESP32**: The central microcontroller responsible for processing the touch inputs and handling communication.
- **Capacitive Touch Sensors**: Used to detect Braille input patterns. Each Braille dot is represented by one capacitive touch sensor.
- **Speaker**: For speech output.
- **Breadboard and Jumper Wires**: For connections between the sensors and ESP32.


## Features

- **Braille Detection**: Detects Braille characters based on touch inputs.
- **Text-to-Speech**: Converts the detected Braille characters to speech in real-time.
- **Compact and Portable**: Powered by a small ESP32 board.
- **Low Power**: Can run on batteries for portable applications.


### Example

- If the user touches the sensors for the Braille letter 'A' (dot 1), the system will output the spoken letter "A".
