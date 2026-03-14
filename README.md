Embedded C Journey

A structured 60-day roadmap to learning Embedded C and systems programming through daily exercises.

This repository tracks my progress as I build strong foundations in:

- C programming
- memory and pointers
- bit manipulation
- firmware architecture
- embedded system concepts
- disciplined Git workflow

Each day contains a small, focused program designed to build real engineering skills.

---

Repository Structure

embedded-c-journey/
│
├── README.md
├── .gitignore
├── docs/
│   ├── roadmap.md        # full 60-day roadmap
│   └── notes.md          # learning notes
│
├── day01_hello_embedded/
├── day02_variables_types/
├── day03_temp_converter/
├── day04_battery_checker/
...

Each exercise follows the same layout:

dayXX_topic/
│
├── Makefile
└── src/
    └── main.c

---

Development Rules

Each daily exercise follows these rules:

- One folder per day
- One program per day
- Source file located in "src/main.c"
- Copy the previous day's "Makefile"
- Build using "make"
- Run using "make run"
- Commit only working code

---

Build Instructions

Navigate into any exercise folder.

Example:

cd day01_hello_embedded

Compile:

make

Run:

make run

Clean build artifacts:

make clean

---

Git Workflow

Daily development cycle:

git status
git add .
git commit -m "dayXX: description of exercise"
git push

Guidelines:

- commit only working code
- write clear commit messages
- push progress daily

---

Learning Roadmap

The full 60-day learning roadmap is documented here:

docs/roadmap.md

It includes:

- daily programming exercises
- increasing difficulty
- embedded-focused concepts
- mini projects
- a final firmware simulation project

---

Goals of This Journey

By the end of the roadmap, I aim to understand:

- C memory model
- pointers and data structures
- bit manipulation
- firmware architecture
- driver design
- embedded system concepts

---

Final Outcome

After completing the roadmap, the next step is working with real hardware.

Target platforms:

- STM32
- RP2040
- ESP32

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

---

License

This repository is for educational purposes and learning documentation.
