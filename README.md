# Programming Logic Activities in C

![Language: C](https://img.shields.io/badge/Language-C-00599C?logo=c&logoColor=white)
![Purpose: Educational](https://img.shields.io/badge/Purpose-Educational-2ea44f)
![Level: Beginner](https://img.shields.io/badge/Level-Beginner-orange)

A collection of programming logic exercises solved in **C**, organized by activity. The repository documents a beginner's learning path: from a first "Hello, World!" to conditionals, loops, vectors (one-dimensional arrays) and matrices (two-dimensional arrays), plus algorithm design with flowcharts and pseudocode.

> **Language note:** folder names, file names and console messages are in Brazilian Portuguese, because the activities were done in a Portuguese-language course. This README translates everything into English so you can navigate the project easily.

---

## Table of Contents

- [Overview](#overview)
- [Repository Structure](#repository-structure)
- [Activities in Detail](#activities-in-detail)
  - [1. Atividade 01 (Activity 01)](#1-atividade-01-activity-01)
  - [2. Atividade Final C (Final Activity in C)](#2-atividade-final-c-final-activity-in-c)
  - [3. Atividade de revisão - correção de erros (Review Activity: Error Correction)](#3-atividade-de-revisão---correção-de-erros-review-activity-error-correction)
  - [4. Atividade vertor e matriz estacio (Vectors and Matrices Activity)](#4-atividade-vertor-e-matriz-estacio-vectors-and-matrices-activity)
- [Concepts Covered](#concepts-covered)
- [Getting Started](#getting-started)
- [File Types in This Repository](#file-types-in-this-repository)
- [Author](#author)

---

## Overview

| Folder | What it is | Contents |
|---|---|---|
| [`Atividade 01`](Atividade%2001/) | First set of exercises | 5 introductory programs |
| [`Atividade Final C`](Atividade%20Final%20C/) | Final project, split into 6 modules | 12 activities (C programs, a Portugol program and a flowchart) |
| [`Atividade de revisão - correção de erros`](Atividade%20de%20revis%C3%A3o%20-%20corre%C3%A7%C3%A3o%20de%20erros/) | Review activity | 15 short code snippets |
| [`Atividade vertor e matriz estacio`](Atividade%20vertor%20e%20matriz%20estacio/) | Vectors and matrices exercises | 12 questions in 2 parts |

---

## Repository Structure

```text
programming-logic-activities-in-C/
├── Atividade 01/
│   ├── 1 - primeira questão/        → olamundo.c
│   ├── 2 - segunda questão/         → odobrodeumnumero.c
│   ├── 3 - terceira questão/        → qualomaiorentredoisnumeros.c
│   ├── 4 - quarta questão/          → parouimpar.c
│   └── 5 - quinta questão/          → todososnumerosantesdele.c
│       (each folder also has an output/ subfolder with the compiled .exe)
│
├── Atividade Final C/
│   ├── Módulo 1/                    → 
│   ├── Módulo 2/                    → Atividade 2.1 (imc.c), Atividade 2.2 (tabelaverdade.cpp)
│   ├── Módulo 3/                    → Atividade 3.1 (ficha.c), Atividade 3.2 (temperaturas.c)
│   ├── Módulo 4/                    → Atividade 4.1 (triangulo.c), Atividade 4.2 (calculadora.c)
│   ├── Módulo 5/                    → Atividade 5.1 (somaemediadenotas.c), Atividade 5.2 (dowhile.c)
│   └── Módulo 6/                    → Atividade 6.1 (notas.c), Atividade 6.2 (somadematrizes.c)
│
├── Atividade de revisão - correção de erros/
│   └── Untitled1.cpp … Untitled15.cpp (+ compiled .exe files)
│
├── Atividade vertor e matriz estacio/
│   ├── Parte 1 Exercícios com Vetores (Unidimensionais)/   → Questão 1 … 6
│   └── Parte 2 Exercícios com Matrizes (Bidimensionais)/   → Questão 7 … 12
│
└── README.md
```

---

## Activities in Detail

### 1. Atividade 01 (Activity 01)

📂 [`Atividade 01/`](Atividade%2001/)

The first contact with C. Five small programs that introduce output, input, arithmetic, decisions and a basic loop. Each question lives in its own folder, with the source code (`.c`) and the compiled Windows executable inside an `output/` subfolder.

| # | Folder | File | What it does |
|---|---|---|---|
| 1 | `1 - primeira questão` (first question) | `olamundo.c` | **Hello, World!** Prints a greeting message to the console. |
| 2 | `2 - segunda questão` (second question) | `odobrodeumnumero.c` | Reads an integer from the user and prints **its double**. |
| 3 | `3 - terceira questão` (third question) | `qualomaiorentredoisnumeros.c` | Reads two integers and tells **which one is greater** (`if / else`). |
| 4 | `4 - quarta questão` (fourth question) | `parouimpar.c` | Reads an integer and tells whether it is **even or odd** using the modulo operator (`%`). |
| 5 | `5 - quinta questão` (fifth question) | `todososnumerosantesdele.c` | Reads a real number and prints **every real number from 0 up to it**, in steps of 0.00001, using a `while` loop. |

**Concepts:** `printf`, `scanf`, variables, arithmetic operators, `if/else`, `while`, `float`.

---

### 2. Atividade Final C (Final Activity in C)

📂 [`Atividade Final C/`](Atividade%20Final%20C/)

The final project of the course, divided into **six modules**, each with **two activities**. Every module focuses on one core topic, and the difficulty increases from module to module.

#### Module 1: Algorithm Design
    deleted

#### Module 2: Variables, Operators and Expressions

📂 [`Módulo 2/`](Atividade%20Final%20C/M%C3%B3dulo%202/)

| Activity | File | What it does |
|---|---|---|
| 2.1 | `imc.c` | Calculates the **BMI (Body Mass Index)** from a weight and a height stored in variables (`weight / height²`) and prints the result with two decimals. |
| 2.2 | `tabelaverdade.cpp` | A **truth table demo**: evaluates logical expressions with `&&` (AND), `\|\|` (OR) and `!` (NOT) over three integer flags, and prints each result as `0` or `1`. |

#### Module 3: Input/Output and Data Conversion

📂 [`Módulo 3/`](Atividade%20Final%20C/M%C3%B3dulo%203/)

| Activity | File | What it does |
|---|---|---|
| 3.1 | `ficha.c` | A **user record form**. Reads a name (with `fgets`), an age and a salary, then prints a formatted "user card". |
| 3.2 | `temperaturas.c` | A **temperature converter**. Reads a temperature in Celsius and prints the equivalent in **Fahrenheit** and **Kelvin**. |

#### Module 4: Conditional Structures

📂 [`Módulo 4/`](Atividade%20Final%20C/M%C3%B3dulo%204/)

| Activity | File | What it does |
|---|---|---|
| 4.1 | `triangulo.c` | Reads three side lengths, checks whether they form a **valid triangle** (triangle inequality) and classifies it as **equilateral, isosceles or scalene**. |
| 4.2 | `calculadora.c` | A **four-operation calculator**. Reads two numbers and an operator code (1 = add, 2 = subtract, 3 = multiply, 4 = divide) and uses a `switch` statement to compute the result. |

#### Module 5: Repetition Structures

📂 [`Módulo 5/`](Atividade%20Final%20C/M%C3%B3dulo%205/)

| Activity | File | What it does |
|---|---|---|
| 5.1 | `somaemediadenotas.c` | Reads **5 grades** with a `for` loop, then prints the **sum and average**, and classifies the student: **approved** (average ≥ 7), **recovery** (≥ 5) or **failed**. |
| 5.2 | `dowhile.c` | A **number guessing game** (1 to 10) built with a `do...while` loop. It gives "too low / too high" hints and shows the **number of attempts** when the player gets it right. |

#### Module 6: Arrays and Matrices

📂 [`Módulo 6/`](Atividade%20Final%20C/M%C3%B3dulo%206/)

| Activity | File | What it does |
|---|---|---|
| 6.1 | `notas.c` | Reads **10 grades** into an array and prints the **sum, average, highest and lowest** values. |
| 6.2 | `somadematrizes.c` | **Matrix addition.** Adds two 2×2 matrices using nested `for` loops and prints the resulting matrix. |

---

### 3. Atividade de revisão - correção de erros (Review Activity: Error Correction)

📂 [`Atividade de revisão - correção de erros/`](Atividade%20de%20revis%C3%A3o%20-%20corre%C3%A7%C3%A3o%20de%20erros/)

A **review activity** made of 15 short snippets (`Untitled1.cpp` to `Untitled15.cpp`), each one isolating a single fundamental concept. The files were created and checked one by one as part of a code-review and error-correction exercise, and each has its compiled `.exe` next to it.

| File | Concept practiced |
|---|---|
| `Untitled1.cpp` | Simple `if` condition (age check) |
| `Untitled2.cpp` | `float` variables and calculating an average |
| `Untitled3.cpp` | Reading user input with `scanf` |
| `Untitled4.cpp` | Printing a `float` with formatting (`%.2f`) |
| `Untitled5.cpp` | Equality comparison inside an `if` |
| `Untitled6.cpp` | `if / else` (pass/fail by grade) |
| `Untitled7.cpp` | Ternary operator (`? :`) with modulo |
| `Untitled8.cpp` | `switch / case` with a `default` branch (menu) |
| `Untitled9.cpp` | `for` loop |
| `Untitled10.cpp` | `while` loop with a counter |
| `Untitled11.cpp` | Declaring an array and assigning a value |
| `Untitled12.cpp` | Initializing an array and accessing its last element |
| `Untitled13.cpp` | Reading a string (`char` array) |
| `Untitled14.cpp` | Two-dimensional array (3×3): assign and print an element |
| `Untitled15.cpp` | Assigning values to array positions by index |

---

### 4. Atividade vertor e matriz estacio (Vectors and Matrices Activity)

📂 [`Atividade vertor e matriz estacio/`](Atividade%20vertor%20e%20matriz%20estacio/)

A set of **12 questions** on vectors and matrices, split into two parts. Each question has its own folder with the source file (`questaoN.c`) and the compiled executable. The code is **commented** step by step.

#### Part 1: Vector (One-Dimensional Array) Exercises

📂 [`Parte 1 Exercícios com Vetores (Unidimensionais)/`](Atividade%20vertor%20e%20matriz%20estacio/Parte%201%20Exerc%C3%ADcios%20com%20Vetores%20%28Unidimensionais%29/)

| Question | File | What it does |
|---|---|---|
| 1 | `questao1.c` | Reads **4 grades**, calculates the average and prints **approved or failed** (cut-off: 6). |
| 2 | `questao2.c` | Reads **5 integers** and prints them in **reverse order**. |
| 3 | `questao3.c` | **Linear search.** Looks for a number in a fixed 10-element array and reports whether it was found and at which position. |
| 4 | `questao4.c` | Reads **6 integers** and says, for each one, whether it is **even or odd**. |
| 5 | `questao5.c` | Finds the **largest and smallest** values in a fixed 8-element array. |
| 6 | `questao6.c` | Reads a **name (up to 15 characters)** into a `char` array and prints a greeting. |

#### Part 2: Matrix (Two-Dimensional Array) Exercises

📂 [`Parte 2 Exercícios com Matrizes (Bidimensionais)/`](Atividade%20vertor%20e%20matriz%20estacio/Parte%202%20Exerc%C3%ADcios%20com%20Matrizes%20%28Bidimensionais%29/)

| Question | File | What it does |
|---|---|---|
| 7 | `questao7.c` | Declares and prints a **3×3 identity matrix**. |
| 8 | `questao8.c` | Reads two **2×2 matrices** from the user, **adds** them and prints the result. |
| 9 | `questao9.c` | Stores **2 grades for each of 3 students** in a matrix, calculates each average and prints **approved or failed** (cut-off: 6). |
| 10 | `questao10.c` | **Search in a 4×4 matrix** of real numbers. Reports whether the value exists and its **row and column**. |
| 11 | `questao11.c` | Reads a **3×3 matrix** and prints the **sum of each row**. |
| 12 | `questao12.c` | A small **inventory system**: a 2×3 matrix represents 2 warehouses × 3 products. The user updates one quantity, and the stock is shown **before and after** the change. |

---

## Concepts Covered

| Topic | Where to find it |
|---|---|
| Output and input (`printf`, `scanf`, `fgets`) | Atividade 01, Module 3, Review activity |
| Variables and data types (`int`, `float`, `char`) | Everywhere |
| Arithmetic operators | Atividade 01, Modules 2 and 3 |
| Logical and relational operators | Module 2 (truth table), Module 4 |
| Conditionals (`if / else`, `switch`, ternary) | Atividade 01, Module 4, Review activity |
| Loops (`for`, `while`, `do...while`) | Atividade 01, Module 5, Review activity |
| Vectors (1D arrays) and strings | Module 6, Vectors and Matrices (Part 1) |
| Matrices (2D arrays) and nested loops | Module 6, Vectors and Matrices (Part 2) |
| Search, minimum/maximum and averages | Module 6, Vectors and Matrices activity |
| Algorithm design (pseudocode and flowcharts) | Module 1 |

---

## Getting Started

### Prerequisites

- A C compiler such as **GCC** (Linux, macOS, or MinGW on Windows) or an IDE with a C compiler built in.
- *Optional:* **Portugol Studio** to open the `.por` file and **Bizagi Modeler** to open the `.bpm` flowchart.

### Clone the repository

```bash
git clone https://github.com/Miguellsouza/programming-logic-activities-in-C.git
cd programming-logic-activities-in-C
```

### Compile and run a program

Wrap paths in quotes, because folder names contain spaces and accents.

```bash
# Example: Atividade 01, question 2
gcc "Atividade 01/2 - segunda questão/odobrodeumnumero.c" -o odobrodeumnumero
./odobrodeumnumero
```

On Windows (PowerShell or CMD), run the output as `.\odobrodeumnumero.exe`.

The `.cpp` files use only the standard C library (`stdio.h`), so they can be compiled with either compiler:

```bash
g++ "Atividade Final C/Módulo 2/Atividade 2.2/tabelaverdade.cpp" -o tabelaverdade
./tabelaverdade
```

### Run the pre-compiled executables

Each activity includes a ready-to-run **Windows `.exe`**. Double-click it, or run it from a terminal so the window stays open after the program ends.

---

## File Types in This Repository

| Extension | Description |
|---|---|
| `.c` | C source code |
| `.cpp` | Source files that use only C-style code (standard I/O), saved with a C++ extension by the IDE |
| `.exe` | Compiled Windows executables of the programs above |

---

## Author

**Miguel Souza**, GitHub: [@Miguellsouza](https://github.com/Miguellsouza)
