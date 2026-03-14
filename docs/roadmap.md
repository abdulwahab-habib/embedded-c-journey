Embedded C Journey — 60-Day Roadmap

Rules

- One folder per day: "dayXX_topic/"
- One program per day ("src/main.c")
- Copy the previous day’s "Makefile"
- Build with "make", run with "make run"
- Commit and push when finished

Daily Git cycle:

git status
git add .
git commit -m "dayXX: task description"
git push

---

Week 1 — Core C Basics

Day 01 — Hello Embedded World
Print a message using "printf".

Day 02 — Variables
Declare temperature, pressure, humidity variables and print them.

Day 03 — Temperature Converter
Convert Celsius → Fahrenheit.

Day 04 — Battery Voltage Check
If voltage < 3.3V print LOW BATTERY.

Day 05 — Switch Statements
Simulate LED states: OFF / BLINK / ON.

Day 06 — Loops
Print numbers 1–100.

Day 07 — Arrays
Store 10 sensor readings and compute average.

---

Week 2 — Functions and Memory

Day 08 — Functions
Write a function that calculates an average.

Day 09 — Multiple Files
Move average function into "math_utils.c".

Day 10 — Pointers
Swap two numbers using pointers.

Day 11 — Pointer Iteration
Traverse an array using pointers.

Day 12 — Structs
Create a "SensorData" struct.

Day 13 — Struct Pointers
Pass struct pointers to functions.

Day 14 — Mini Project
Sensor logger that stores and prints readings.

---

Week 3 — Bit Manipulation (Embedded Core)

Day 15 — Binary Numbers
Print binary representation of an integer.

Day 16 — Bitwise AND / OR
Simulate LED enable flags.

Day 17 — Bit Shifting
Extract bit fields.

Day 18 — Bit Masks
Check if a specific bit is set.

Day 19 — Toggle Bits
Simulate GPIO toggling.

Day 20 — Typedef
Create custom integer types.

Day 21 — Enums
Define robot states: IDLE, MOVE, ERROR.

---

Week 4 — Embedded Concepts

Day 22 — Volatile Variables
Simulate hardware registers.

Day 23 — Memory Addresses
Print addresses of variables.

Day 24 — Memory-Mapped Registers
Create a fake hardware register pointer.

Day 25 — Register Macros
Implement "SET_BIT", "CLEAR_BIT".

Day 26 — Static Variables
Counter that persists across function calls.

Day 27 — Const Configuration
Create immutable configuration structs.

Day 28 — Compiler Warnings
Compile with "-Wall -Wextra" and fix warnings.

---

Week 5 — System Thinking

Day 29 — Delay Loop
Write a software delay.

Day 30 — State Machine
Robot state transitions.

Day 31 — Circular Buffer
Store streaming sensor data.

Day 32 — Ring Buffer Operations
Push and pop data.

Day 33 — Button Debounce Logic

Day 34 — Interrupt Concept Simulation

Day 35 — Event Queue

---

Week 6 — Embedded Drivers (Simulated)

Day 36 — Watchdog Timer Concept

Day 37 — Software Timers

Day 38 — Modular Driver Design

Day 39 — Hardware Abstraction Layer (HAL)

Day 40 — GPIO Driver Simulation

Day 41 — Configuration Structures

Day 42 — Error Codes

---

Week 7 — Embedded Peripherals

Day 43 — UART Concept Simulation

Day 44 — SPI Concept Simulation

Day 45 — I2C Sensor Simulation

Day 46 — ADC Reading Simulation

Day 47 — PWM Motor Control Simulation

Day 48 — H-Bridge Motor Logic

Day 49 — Basic PID Controller

---

Week 8 — Systems Thinking

Day 50 — Integer PID (Fixed-Point)

Day 51 — Memory Constraints (No malloc)

Day 52 — Stack Usage Awareness

Day 53 — Compiler Optimization

Day 54 — Modular Project Structure

Day 55 — Motor Control Simulation

Day 56 — Sensor Fusion (Simple averaging)

Day 57 — Logging System

Day 58 — Robot Controller Simulation

Day 59 — System Integration

Day 60 — Final Project
Build a mini firmware simulation including:

- sensor inputs
- state machine
- motor control
- logging

---

After the 60 Days

Start working with real hardware:

1. STM32
2. RP2040
3. ESP32

Focus on:

- GPIO
- UART
- timers
- PWM
- interrupts
- ADC
- drivers

Eventually move to:

- RTOS
- control loops
- robotics firmware
