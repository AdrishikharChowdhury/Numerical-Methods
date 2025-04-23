# 📐 Newton's Backward Interpolation (C Implementation)

A terminal-based C program that uses **Newton's Backward Interpolation** method to estimate the value of a function based on a set of data points. This numerical technique is ideal for interpolating values near the end of a given dataset.

---

## 📚 Table of Contents

- [📌 Overview](#overview)
- [⚙️ How It Works](#how-it-works)
- [📥 Input Format](#input-format)
- [🚀 Compilation & Execution](#compilation--execution)
- [📤 Sample Run](#sample-run)
- [💡 Features](#features)
- [🔍 Formula](#formula)
- [📦 File Structure](#file-structure)
- [🛠️ Possible Improvements](#possible-improvements)
- [👨‍💻 Author](#author)

---

## 📌 Overview

This program allows users to input a table of values for `x` and `f(x)` and then calculates the interpolated value for a specified point using the **Newton’s Backward Difference Method**. It handles:

- Dynamic 2D memory allocation for data tables
- Finite difference table generation
- Function estimation using backward difference formula

---

## ⚙️ How It Works

1. Accepts `n` number of data points (`x` and `f(x)`).
2. Constructs a finite difference table using backward differences.
3. Calculates the value of the function at the desired interpolation point using Newton’s Backward formula.

---

## 📥 Input Format

- Number of data points: `n`
- Two rows of data:
  - First row: `x` values (must be equally spaced)
  - Second row: `f(x)` values
- Interpolation point `x` for which value is to be estimated

---

## 🚀 Compilation & Execution

To compile and run the program:

```bash
gcc newton_backward.c -o newton_backward
./newton_backward
```

---

## 📤 Sample Run

```
Enter the no. of data pairs: 5
Enter the data pairs:
Enter the datatable[0][0]: 1
Enter the datatable[0][1]: 2
Enter the datatable[0][2]: 3
Enter the datatable[0][3]: 4
Enter the datatable[0][4]: 5
Enter the datatable[1][0]: 1
Enter the datatable[1][1]: 8
Enter the datatable[1][2]: 27
Enter the datatable[1][3]: 64
Enter the datatable[1][4]: 125
Enter the interpolating point: 4.5

The value at the interpolating point 4.500000 is 94.625000
```

---

## 💡 Features

- 🧮 Accurate backward interpolation using finite difference table
- 🔁 Dynamic memory allocation for flexibility
- 📊 Tabulated difference table output
- ✅ Simple and beginner-friendly C implementation

---

## 🔍 Formula

Let:  
- `v = (x - x_n) / h`  
- `x_n` is the last value in the x array  
- `h` is the uniform spacing

The interpolation formula is:

```math
f(x) ≈ y_n + vΔy_n + v(v+1)/2! Δ²y_n + v(v+1)(v+2)/3! Δ³y_n + ...
```

---

## 📦 File Structure

```
newton_backward.c       # Main C source file containing logic
README.md               # Documentation file (this file)
```

---

## 🛠️ Possible Improvements

- Add input validation for equally spaced x-values
- Support for non-uniform data (e.g., using Lagrange)
- Store difference table in a file
- Add graphical plotting (e.g., with GNUPlot or similar)

---

## 👨‍💻 Author

**Adrishikhar Chowdhury**  
📧 amiadrishikhar@gmail.com  
🌐 [Portfolio Website](https://adrishikharchowdhury.glitch.me)
