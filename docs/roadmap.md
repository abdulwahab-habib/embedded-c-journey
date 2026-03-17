# Embedded C Journey — 60 # # Day Roadmap

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

# Repository Structure

```
embedded-c-journey/
│
├── README.md
├── .gitignore
│
├── docs/
│   ├── roadmap.md        # full 60-day roadmap
│   └── notes.md          # learning notes
│
├── day01_hello_embedded/
├── day02_variables_types/
├── day03_temp_converter/
├── day04_battery_checker/
│
└── ...
```

Each exercise follows the same internal structure:

```
dayXX_topic/
│
├── Makefile
└── src/
    └── main.c
```


---

# Development Rules

Each exercise must follow these rules:

- One folder per day
- One program per day
- Source code in "src/main.c"
- Copy previous day's Makefile
- Build using "make"
- Run using "make run"
- Commit working code only

---

# Build Instructions

Inside any day folder:

make
make run

Clean build:

make clean

---

# Daily Git Workflow

git status
git add .
git commit -m "dayXX: description of task"
git push

Never commit broken code.

---

# 60 # # Day Embedded C Roadmap

---

Week 1 — C Foundations

# Day 01 — Hello Embedded World

Write a program that prints:

Hello Embedded World

Learn:

- program structure
- compilation
- "printf"

---

# Day 02 — Variables and Data Types

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

# Day 03 — Temperature Converter

Input a temperature in Celsius and convert it to Fahrenheit.

Formula:

F = (C × 9 / 5) + 32

Learn:

- arithmetic
- floating point operations

---


# Day 04 — Battery Voltage Checker (Deterministic + Robust)

Problem

Simulate a battery monitoring system used in embedded devices.

Requirements

Define:

LOW_THRESHOLD = 3.3

CRITICAL_THRESHOLD = 3.0


Accept float voltage input

Output must be EXACTLY one of:


CRITICAL
LOW
OK

Logic

voltage < 3.0 → CRITICAL

3.0 ≤ voltage < 3.3 → LOW

≥ 3.3 → OK


Constraints

No magic numbers (use macros)

Must handle invalid input (negative voltage → print INVALID)


Expected Output Example

Input: 2.9
Output: CRITICAL


---

# Day 05 — State-Controlled LED System (Switch + Validation)

Problem

Design a strict command decoder for an LED controller.

Requirements

Input: integer command

Valid commands:

0 → OFF

1 → BLINK_SLOW

2 → BLINK_FAST

3 → ON


Any other input → ERROR


Constraints

Must use switch

Must NOT fall through cases

Each case must be isolated


Expected Output

Input: 2
Output: BLINK_FAST


---

# Day 06 — Deterministic Loop Execution

Problem

Simulate a time-stepped embedded loop.

Requirements

Loop from 0 → 100

Print ONLY:

multiples of 3 AND 5


Count how many matches


Output Format

15
30
45
...
COUNT: X

Constraint

No modulo shortcuts like chained conditions without logic clarity

Must separate logic into a function



---

# Day 07 — Sensor Sampling Buffer

Problem

Store sensor readings and compute statistics safely.

Requirements

Fixed array size = 10

Hardcode values (no input)

Compute:

min

max

average



Constraints

No global variables

No floating overflow (use correct types)


Output

MIN: X
MAX: Y
AVG: Z


---

Week 2 — Functions & Memory (Real Discipline)


---

# Day 08 — Strict Function Contracts

Problem

Design a safe averaging function.

Requirements

Function:

float average(const float *values, int size);

Constraints

Must validate:

NULL pointer

size <= 0


Return -1 on failure


Output

AVG: 23.45


---

# Day 09 — Multi-File Compilation (Real Build Discipline)

Problem

Split logic into modules.

Requirements

Files:

main.c

stats.c

stats.h


Functions:

average

min

max



Constraints

No duplicate code

Header guards required



---

# Day 10 — Pointer Integrity

Problem

Swap values using pointers safely.

Requirements

Function:


int swap(int *a, int *b);

Constraints

Return error if NULL

Do NOT crash on bad input



---

# Day 11 — Manual Memory Traversal

Problem

Traverse array WITHOUT indexing.

Requirements

Use pointer arithmetic only

Print all values


Constraint

No [] operator allowed



---

# Day 12 — Structured Sensor Packet

Problem

Represent real sensor data.

Requirements

struct SensorData {
    float temp;
    float pressure;
    float humidity;
};

Task

Create array of 5 structs

Print formatted table



---

# Day 13 — Pass-by-Reference Discipline

Problem

Process struct via pointer.

Requirements

Function:


void print_sensor(const struct SensorData *s);

Constraint

Must be const correct



---

# Day 14 — Mini Project: Sensor Logger v1

Problem

Simulate embedded data logging.

Requirements

Store 10 samples

Compute:

min/max/avg per field


Print report


Output Format

TEMP AVG: X
PRESSURE AVG: Y
HUMIDITY AVG: Z


---

Week 3 — Bit Manipulation (Critical for Embedded)


---

# Day 15 — Binary Visualization Tool

Problem

Convert integer → binary string (32-bit).

Requirements

Always print 32 bits

No library functions


Output

00000000000000000000000000001111


---

# Day 16 — Bitwise Control Register

Problem

Simulate 8-bit hardware register.

Requirements

Define flags:

LED1 = bit 0

LED2 = bit 1


Perform:

set

clear

toggle




---

# Day 17 — Bit Extraction Engine

Problem

Extract any bit position.

Function

int get_bit(unsigned int value, int position);

Constraint

Must validate position (0–31)



---

# Day 18 — Status Flag Decoder

Problem

Interpret system status byte.

Requirements

Bits represent:

bit0 → ERROR

bit1 → READY

bit2 → BUSY


Print active flags



---

# Day 19 — Bit Macro Library

Problem

Create reusable macros:

SET_BIT(x, n)
CLEAR_BIT(x, n)
TOGGLE_BIT(x, n)
READ_BIT(x, n)

Constraint

Must be side-effect safe



---

# Day 20 — Fixed-Width Thinking

Problem

Define types safely.

Requirements

Use:

#include <stdint.h>

Replace all primitive types with fixed-width equivalents


---

# Day 21 — Finite State Machine (Strict)

Problem

Robot state transitions.

States

IDLE → MOVE → STOP → ERROR

Requirement

No invalid transitions allowed



---

Week 4 — Embedded Concepts (No More Toy Code)


---

# Day 22 — Volatile Behavior Simulation

Problem

Simulate changing hardware register.

Requirement

Variable updated inside loop

Must use volatile



---

# Day 23 — Memory Introspection

Problem

Inspect memory layout.

Requirements

Print addresses of:

variables

arrays

structs




---

# Day 24 — Memory-Mapped IO Simulation

Problem

Simulate hardware register access.

Requirement

#define REG (*(volatile uint32_t*)0x40000000)

Task

Write and read values



---

# Day 25 — Register Driver Layer

Problem

Abstract register access.

Functions

reg_write

reg_read

reg_set_bit



---

# Day 26 — Static State Retention

Problem

Track function calls.

Requirement

Static counter inside function



---

# Day 27 — Immutable Config System

Problem

Prevent accidental modification.

Requirement

Use const config struct



---

# Day 28 — Zero Warning Policy

Problem

Compile clean.

Requirement

-Wall -Wextra -Werror

Fix EVERYTHING.


---

Week 5 — System Thinking


---

# Day 29 — Cycle-Accurate Delay Simulation

Problem

Simulate CPU delay.

Requirement

Delay function using loops

Calibrate with iteration count



---

# Day 30 — Real FSM Engine

Problem

Table-driven FSM.

Requirement

Use function pointers



---

# Day 31 — Circular Buffer (Core Embedded Pattern)

Problem

Implement ring buffer.

Requirement

No overflow allowed



---

# Day 32 — Ring Buffer Robustness

Problem

Add:

push

pop

is_full

is_empty



---

# Day 33 — Button Debounce (Realistic)

Problem

Simulate noisy input.

Requirement

Filter unstable transitions



---

# Day 34 — Interrupt Simulation

Problem

Simulate ISR behavior.

Requirement

Separate ISR and main loop



---

# Day 35 — Event Queue System

Problem

Queue system events.

Requirement

FIFO behavior



---

Week 6 — Driver Architecture


---

# Day 36 — Watchdog Timer Logic

Problem

Simulate system reset.


---

# Day 37 — Software Timer Scheduler

Problem

Tick-based timers.


---

# Day 38 — GPIO Driver Module

Problem

Create driver abstraction.


---

# Day 39 — HAL Layer

Problem

Hardware abstraction.


---

# Day 40 — GPIO Simulation Engine

Problem

Simulate pin states.


---

# Day 41 — Configurable Drivers

Problem

Pass config structs.


---

# Day 42 — Error Handling Strategy

Problem

Unified error codes.


---

Week 7 — Peripheral Simulation


---

# Day 43 — UART Driver

Problem

Transmit/receive buffer.


---

# Day 44 — SPI Engine

Problem

Full-duplex simulation.


---

# Day 45 — I2C Sensor Model

Problem

Register-based device.


---

# Day 46 — ADC Conversion Logic

Problem

Raw → voltage conversion.


---

# Day 47 — PWM Generator

Problem

Duty cycle simulation.


---

# Day 48 — Motor Driver Logic

Problem

H-bridge truth table.


---

# Day 49 — PID Controller (Floating)

Problem

Control loop implementation.


---

Week 8 — Systems Engineering (Non-Negotiable Level)


---

# Day 50 — Fixed-Point Math (No Float)

Problem

Rewrite PID using integers.


---

# Day 51 — No Heap Policy

Problem

Remove all dynamic allocation.


---

# Day 52 — Stack Discipline

Problem

Analyze memory usage.


---

# Day 53 — Optimization Analysis

Problem

Compare assembly output.


---

# Day 54 — Firmware Architecture

Problem

Layered structure.


---

# Day 55 — Motor Control Integration

Problem

Combine PWM + driver.


---

# Day 56 — Sensor Fusion Logic

Problem

Combine multiple inputs.


---

# Day 57 — Logging Framework

Problem

Structured logs.


---

# Day 58 — Robot Controller

Problem

Full control loop.


---

# Day 59 — System Integration

Problem

All modules working together.


---

# Day 60 — Final Firmware Simulation

Problem

Build a complete embedded system simulation:

Must Include

FSM

sensors

motor control

logging

error handling



---

Reality Check

This is no longer beginner-friendly fluff.
This is entry-level firmware engineer training.

If you complete this properly:

you’ll understand memory deeply

you’ll think in systems

you’ll stop writing fragile code



---

If you want next step:
I can convert this into strict MISRA-style constraints + review checklist per day so you build like a real firmware engineer, not a hobbyist.
