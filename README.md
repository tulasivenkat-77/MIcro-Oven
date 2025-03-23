# MIcro-Oven


# Microwave Oven Control System

## Project Overview
This project implements a comprehensive control system for a microwave oven using the PIC16F877 microcontroller. The system manages all essential functionalities of a modern microwave oven, including precise timing control, multiple cooking modes, power level adjustment, and critical safety features—all through an intuitive user interface with keypad input and LCD display.

## Core Components

### Hardware Components
- **Microcontroller**: PIC16F877 (8-bit RISC microcontroller)
- **Input Interface**: 4x4 Matrix Keypad for user command entry
- **Display**: 16x2 LCD for status display and user feedback
- **Power Control**: Relay/TRIAC circuit for magnetron power regulation
- **Sensors**:
  - Door sensor (reed switch/microswitch) for safety interlock
  - Temperature sensor (thermistor/thermocouple) for overheat protection
- **Buzzer/Speaker**: For audible alerts and end-of-cooking notification
- **Clock Circuit**: Real-time clock with battery backup
- **Power Supply**: Regulated 5V power supply for the control system

### Software Components
- **Main Control Firmware**: Written in C for the PIC16F877
- **Timer Interrupt Routines**: For precise timing control
- **User Interface Logic**: Menu system and display management
- **Safety Monitoring System**: Continuous monitoring of door status and temperature
- **Cooking Mode Algorithms**: Pre-programmed cooking cycles

## System Functionality

### User Interface
1. **Menu System**: Simple menu structure for mode selection
2. **Quick-Start Options**: One-touch operation for common cooking tasks
3. **Status Display**: Real-time feedback on cooking progress
   - Remaining time
   - Current power level
   - Active cooking mode
   - Error messages and warnings

### Core Features
- **Timing Control**: Precise digital timing from 1 second to 99 minutes
- **Power Regulation**: Multiple power levels (10% to 100% in 10% increments)
- **Cooking Modes** (4 specific modes):
  - Start (standard cooking at full power)
  - Grill (top element only)
  - Convection (fan-assisted cooking)
  - Macro (programmable multi-stage cooking)

### Safety Features
- **Door Interlock**: Immediate power cutoff when door is opened
- **Thermal Protection**: Automatic shutdown on detecting overheating
- **Child Lock**: Optional keypad lock to prevent unauthorized use
- **Malfunction Detection**: Self-diagnostic system that monitors critical components
- **Cooking Time Limits**: Maximum continuous operation time constraints

## Technical Implementation

### Microcontroller Programming
- **Development Environment**: MPLAB IDE for code development
- **Programming Language**: C
- **Simulation Tool**: PIC SimLab for system testing before hardware implementation
- **Programming Interface**: In-Circuit Serial Programming (ICSP)

### Control Algorithms
- **PWM Implementation**: For precise power control of the magnetron
- **Timer Interrupts**: For accurate timing and display updates
- **Debouncing**: Software debouncing for keypad input reliability

### Memory Allocation
- **Program Memory**: Cooking algorithms and control logic
- **EEPROM Usage**: Storage for user presets and calibration data
- **RAM Management**: Efficient allocation for runtime variables

## System Architecture
- **Modular Design**: Separation of concerns between input handling, output control, and core logic
- **Interrupt-Driven**: Responsive system with prioritized interrupt handling
- **State Machine**: Implementation of finite state machine for operational modes
- **Watchdog Timer**: System reset capability in case of software hang

## Testing and Validation
- **Simulation Testing**: Initial validation in PIC SimLab
- **Hardware Testing**: Progressive testing of individual components
- **Integration Testing**: Full system verification under various conditions
- **Safety Verification**: Rigorous testing of all safety features
- **Usability Testing**: Interface evaluation with potential users

## Applications
- **Educational Tool**: Demonstrates embedded system principles
- **Prototype Development**: Foundation for commercial product development
- **Research Platform**: For exploring efficient cooking algorithms

## Future Enhancements
- **Smart Features**: WiFi/Bluetooth connectivity for remote control
- **Voice Control**: Integration of voice recognition module
- **Energy Optimization**: Intelligent power management for energy efficiency
- **Recipe Database**: Expandable database of pre-programmed cooking instructions
