Embedded C Journey — 60 Day Roadmap

This repository documents my structured journey to learning Embedded C and Systems Programming through daily exercises.

The goal is to build strong foundations in:

- C programming
- memory and pointers
- bit manipulation
- embedded system design concepts
- firmware architecture
- disciplined Git workflow

Each day introduces a focused concept and a small program.

---

Repository Structure

embedded-c-journey/
│
├── README.md
├── .gitignore
├── docs/
│   ├── roadmap.md
│   └── notes.md
│
├── day01_hello_embedded/
├── day02_variables_types/
├── day03_temp_converter/
├── day04_battery_checker/
...

Each day follows the same internal structure:

dayXX_topic/
│
├── Makefile
└── src/
    └── main.c

---

Development Rules

Each exercise must follow these rules:

- One folder per day
- One program per day
- Source code in "src/main.c"
- Copy previous day's Makefile
- Build using "make"
- Run using "make run"
- Commit working code only

---

Build Instructions

Inside any day folder:

make
make run

Clean build:

make clean

---

Daily Git Workflow

git status
git add .
git commit -m "dayXX: description of task"
git push

Never commit broken code.

---

60 Day Embedded C Roadmap

---

Week 1 — C Foundations

Day 01 — Hello Embedded World

Write a program that prints:

Hello Embedded World

Learn:

- program structure
- compilation
- "printf"

---

Day 02 — Variables and Data Types

Create variables representing:

- temperature
- pressure
- humidity

Print them using formatted output.

Learn:

- "int"
- "float"
- "printf"

---

Day 03 — Temperature Converter

Input a temperature in Celsius and convert it to Fahrenheit.

Formula:

F = (C × 9 / 5) + 32

Learn:

- arithmetic
- floating point operations

---

Day 04 — Battery Voltage Checker

Simulate a battery system.

If voltage is less than 3.3V print:

LOW BATTERY

Otherwise print:

BATTERY OK

Learn:

- "if"
- "else"

---

Day 05 — Switch Statement

Simulate LED modes:

0 = OFF
1 = BLINK
2 = ON

Use a "switch" statement.

---

Day 06 — Loops

Print numbers from 1 to 100.

Then print only even numbers.

Learn:

- "for"
- "while"

---

Day 07 — Arrays

Store 10 sensor readings.

Calculate and print:

- sum
- average

---

Week 2 — Functions and Memory

Day 08 — Functions

Create a function:

float average(float values[], int size);

Call it from "main()".

---

Day 09 — Multiple Files

Split code into:

main.c
math_utils.c
math_utils.h

Learn:

- compilation units
- headers

Update Makefile accordingly.

---

Day 10 — Pointers

Write a function that swaps two integers using pointers.

---

Day 11 — Pointer Arithmetic

Traverse an array using pointer arithmetic instead of indexing.

---

Day 12 — Structs

Create:

struct SensorData
{
    float temperature;
    float pressure;
    float humidity;
};

---

Day 13 — Struct Pointers

Pass a struct pointer to a function that prints sensor data.

---

Day 14 — Mini Project

Build a sensor logger.

Features:

- store readings
- compute averages
- print report

---

Week 3 — Bit Manipulation

Day 15 — Binary Representation

Print an integer in binary form.

---

Day 16 — Bitwise Operators

Use:

&
|
^
~

Simulate LED enable flags.

---

Day 17 — Bit Shifting

Extract individual bits using shifts.

---

Day 18 — Bit Masks

Check if a specific bit is set.

Example:

status & (1 << 3)

---

Day 19 — Toggle Bits

Implement:

SET_BIT
CLEAR_BIT
TOGGLE_BIT

---

Day 20 — Typedef

Create aliases:

typedef unsigned char u8;
typedef unsigned int u32;

---

Day 21 — Enums

Create a robot state machine:

IDLE
MOVE
STOP
ERROR

---

Week 4 — Embedded Concepts

Day 22 — Volatile

Simulate a hardware register:

volatile int status_register;

---

Day 23 — Memory Addresses

Print variable addresses using:

&variable

---

Day 24 — Memory-Mapped Register Simulation

Create:

#define LED_REG (*(volatile int*)0x40000000)

Simulate register control.

---

Day 25 — Register Macros

Create macros:

SET_BIT
CLEAR_BIT
READ_BIT

---

Day 26 — Static Variables

Create a function that counts how many times it runs.

---

Day 27 — Const Configuration

Create immutable configuration structures.

---

Day 28 — Compiler Warnings

Compile with:

-Wall
-Wextra

Fix all warnings.

---

Week 5 — System Thinking

Day 29 — Delay Loop

Implement a crude delay loop.

---

Day 30 — Finite State Machine

Create a robot FSM with states:

IDLE
FORWARD
TURN
STOP

---

Day 31 — Circular Buffer

Implement a fixed-size circular buffer.

---

Day 32 — Ring Buffer Operations

Add push and pop operations.

---

Day 33 — Button Debounce Simulation

Simulate button noise filtering.

---

Day 34 — Interrupt Concept

Simulate an interrupt handler.

---

Day 35 — Event Queue

Create an event system for robot actions.

---

Week 6 — Driver Architecture

Day 36 — Watchdog Concept

Simulate watchdog reset logic.

---

Day 37 — Software Timers

Implement timer tick counters.

---

Day 38 — Modular Drivers

Create:

gpio.c
gpio.h

---

Day 39 — Hardware Abstraction Layer

Create HAL wrapper functions.

---

Day 40 — GPIO Driver Simulation

Simulate:

gpio_set
gpio_clear
gpio_toggle

---

Day 41 — Configuration Structures

Create configuration structs for drivers.

---

Day 42 — Error Codes

Use return codes for error handling.

---

Week 7 — Peripheral Concepts

Day 43 — UART Simulation

Simulate sending bytes.

---

Day 44 — SPI Simulation

Simulate SPI transactions.

---

Day 45 — I2C Sensor Simulation

Simulate reading sensor registers.

---

Day 46 — ADC Simulation

Convert analog reading to voltage.

---

Day 47 — PWM Simulation

Simulate motor speed control.

---

Day 48 — H-Bridge Logic

Simulate motor direction control.

---

Day 49 — PID Controller

Implement basic PID control.

---

Week 8 — Systems Engineering

Day 50 — Fixed-Point PID

Rewrite PID without floating point.

---

Day 51 — Memory Constraints

Remove dynamic memory usage.

---

Day 52 — Stack Awareness

Analyze stack usage.

---

Day 53 — Compiler Optimization

Compare:

-O0
-O2

---

Day 54 — Modular Firmware Structure

Create folders:

drivers/
hal/
app/

---

Day 55 — Motor Control Simulation

Integrate PWM and H-bridge logic.

---

Day 56 — Sensor Fusion

Combine multiple sensor inputs.

---

Day 57 — Logging System

Create structured log output.

---

Day 58 — Robot Controller

Integrate:

- sensors
- motors
- state machine

---

Day 59 — System Integration

Combine all modules.

---

Day 60 — Final Project

Build a mini firmware simulation with:

- sensors
- state machine
- motor control
- logging

---

After The 60 Days

Move to real embedded hardware.

Recommended order:

1. STM32
2. RP2040
3. ESP32

Focus on:

- GPIO
- UART
- timers
- interrupts
- PWM
- ADC
- drivers

Later topics:

- RTOS
- control systems
- robotics firmware
