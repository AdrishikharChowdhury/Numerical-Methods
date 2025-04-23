
# 📐 Newton's Backward Interpolation Method

A Python implementation of **Newton's Backward Interpolation** for estimating the value of a function for a given x using tabulated data points. Useful in numerical methods for cases where values near the **end of a data table** are to be interpolated.

---

## 📚 Table of Contents

- [📌 Overview](#overview)
- [⚙️ How It Works](#how-it-works)
- [🧠 Formula](#formula)
- [🚀 Getting Started](#getting-started)
- [📥 Input Format](#input-format)
- [📤 Sample Output](#sample-output)
- [💡 Use Cases](#use-cases)
- [🛠️ Future Improvements](#future-improvements)
- [👨‍💻 Author](#author)

---

## 📌 Overview

This project numerically estimates the value of a function using **backward differences**, ideal when interpolation is needed near the end of a set of evenly spaced values. It's part of classical numerical analysis and useful for both academic and practical applications in engineering and science.

---

## ⚙️ How It Works

- Assumes **equally spaced x-values**.
- Constructs a **backward difference table** from the provided data.
- Applies **Newton’s backward interpolation formula** to find the estimated value at a given x.

---

## 🧠 Formula

Let  
- `y_n` be the last value in the dataset  
- `h` be the spacing between `x` values  
- `u = (x - x_n) / h`  

The interpolation formula is:

```math
f(x) ≈ y_n + u Δy_n + u(u+1)/2! Δ²y_n + u(u+1)(u+2)/3! Δ³y_n + ...
```

Where `Δ` represents the **backward difference** operator.

---

## 🚀 Getting Started

### 🔧 Requirements

- Python 3.x

### ▶️ How to Run

```bash
python newton_backward.py
```

---

## 📥 Input Format

- A list of `x` values (must be equally spaced)
- A list of corresponding `y` values
- A value of `x` to interpolate

---

## 📤 Sample Output

```txt
Enter number of data points: 4
Enter x values: 5 6 7 8
Enter corresponding y values: 150 172 198 226
Enter value of x to interpolate: 7.5

Estimated value at x = 7.5 is 212.25
```

---

## 💡 Use Cases

- Estimating values in physics experiments
- Engineering table lookups
- Interpolation in financial modeling
- Any dataset with equally spaced values requiring smooth estimates

---

## 🛠️ Future Improvements

- GUI interface for input/output
- Support for non-uniform intervals (via Newton-Gregory interpolation)
- Plotting of the interpolation result
- Error estimation

---

## 👨‍💻 Author

**Adrishikhar Chowdhury**  
📧 amiadrishikhar@gmail.com  
🌐 [Portfolio Website](https://adrishikharchowdhury.glitch.me)
