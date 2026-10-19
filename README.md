# DIU Smart Transport & Logistics System

This repository contains the C programming implementations for the Lab Assignment of **Structured Programming (CIS 115 & CIS 115L)** at Daffodil International University (DIU).

## 📌 Course Details
* **Course Title:** Structured Programming Lab
* **Course Code:** CIS 115 & CIS 115L
* **Department:** Department of Computing and Information Systems (CIS)
* **University:** Daffodil International University (DIU)
* **Semester:** Summer-2026

---

## 📖 Project Overview
The project simulates a smart campus transit system named **DIU Smart Transport & Logistics System**. It solves various practical transit problems on campus using core C programming concepts such as conditional structures (`if-else`, `switch-case`), looping constructs, nested loops, arrays, and searching algorithms.

> **Dynamic ID Logic:** Problem variables ($M$ and $N$) are dynamically derived from the last two digits of the Student ID.

---

## 📂 Code Index & Tasks

### 1. [AutoPark's Smart Fare Calculator](./AutoPark's%20Smart%20Fare%20Calculator.c)
* **File Name:** `AutoPark's Smart Fare Calculator.c`
* **Core Concepts:** `if-else` branching, mathematical operations
* **Description:** Calculates parking fees for motorcycles and cars based on dynamic hours ($H_1 = M+3$, $H_2 = N+4$). Applies tiered student discounts (20%, 10%, or 5%) depending on the total bill before discount.

### 2. [TransitBot's Schedule Kiosk](./TransitBot's%20Schedule%20Kiosk.c)
* **File Name:** `TransitBot's Schedule Kiosk.c`
* **Core Concepts:** `switch-case`, `do-while` / `while` loop
* **Description:** Interactive menu kiosk displaying bus routes (Dhanmondi, Uttara, Campus Shuttle). Continually re-displays the menu until the user selects option `4` to exit.

### 3. [SignalBot's Digital Traffic Display](./SignalBot's%20Digital%20Traffic%20Display.c)
* **File Name:** `SignalBot's Digital Traffic Display.c`
* **Core Concepts:** Nested loops, pattern generation
* **Description:** Displays a right-angled numeric traffic guidance pattern. The number of rows $R$ is dynamically calculated using $R = (M \bmod 3) + 4$.

### 4. [DIU Fleet Bus Tracker](./DIUFleetBusTracker.c)
* **File Name:** `DIUFleetBusTracker.c`
* **Core Concepts:** 1D Arrays, Linear Search algorithm
* **Description:** Stores active bus IDs in an array (`{301, 302, 303, 400+M, 400+N}`). Uses linear search to verify if a given bus is active on route or parked at the depot.

---

## 🛠️ How to Run

1. Clone the repository:
   ```bash
   git clone [https://github.com/being-fahim/SP_assignment.git](https://github.com/being-fahim/SP_assignment.git)
