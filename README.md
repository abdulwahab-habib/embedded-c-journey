# Embedded C Journey

A structured **60-day roadmap to learning Embedded C and systems programming** through daily exercises.

This repository documents my progress as I build strong foundations in:

- C programming
- pointers and memory
- bit manipulation
- embedded system concepts
- firmware architecture
- disciplined Git workflow

Each day contains a small focused program designed to build real engineering skills.

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

Each exercise follows the same layout:

```
dayXX_topic/
│
├── Makefile
└── src/
    └── main.c
```

---

# Development Rules

Each daily exercise follows these rules:

- One folder per day
- One program per day
- Source file located in `src/main.c`
- Copy the previous day's `Makefile`
- Build using `make`
- Run using `make run`
- Commit only working code

---

# Build Instructions

Navigate into any exercise folder.

Example:

```
cd day01_hello_embedded
```

Compile the program:

```
make
```

Run the program:

```
make run
```

Clean build files:

```
make clean
```

---

# Daily Git Workflow

```
git status
git add .
git commit -m "dayXX: description of exercise"
git push
```

Guidelines:

- commit only working code
- write clear commit messages
- push progress daily

---

# Learning Roadmap

The complete roadmap is located here:

```
docs/roadmap.md
```

It contains the full **60-day Embedded C learning plan**, including:

- daily programming exercises
- progressively harder topics
- embedded-focused concepts
- mini projects
- a final firmware simulation

---

# Goals of This Journey

By the end of this roadmap I aim to understand:

- the C memory model
- pointer usage and safety
- bitwise operations
- firmware architecture
- embedded driver design
- system-level programming concepts

---

# Final Outcome

After completing this roadmap, the next step is working with **real embedded hardware**.

Recommended progression:

1. STM32
2. RP2040
3. ESP32

Focus areas:

- GPIO
- UART
- timers
- interrupts
- PWM
- ADC
- device drivers

Eventually progressing to:

- RTOS
- control systems
- robotics firmware
