# Lagrange's Interpolation Method

## 📌 Overview

This project implements **Lagrange's Interpolation**, a numerical method used to estimate the value of a function given a set of known data points. It's widely used in scientific computing, engineering, and applied mathematics.

---

## 🧮 What is Lagrange's Interpolation?

Lagrange's Interpolation constructs a polynomial that passes exactly through a given set of data points. For `n` points:

```
(x₀, y₀), (x₁, y₁), ..., (xₙ₋₁, yₙ₋₁)
```

The interpolating polynomial is:

```
P(x) = Σ [yᵢ * Lᵢ(x)]  where i = 0 to n-1
```

Where:

```
Lᵢ(x) = Π [(x - xⱼ) / (xᵢ - xⱼ)] for j ≠ i
```

---

## 🚀 Features

- Input any number of data points.
- Calculate the Lagrange interpolating polynomial.
- Evaluate the interpolated value at any given x.
- Clean and modular Python implementation.

---

## 🛠️ How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/lagrange-interpolation.git
   cd lagrange-interpolation
   ```

2. Run the script:
   ```bash
   python lagrange.py
   ```

3. Example usage:
   ```python
   x = [1, 2, 4]
   y = [1, 4, 16]
   value = lagrange_interpolate(x, y, 3)
   print(value)  # Output: 9.0
   ```

---

## 📁 Files

- `lagrange.py` – Main implementation
- `README.md` – Documentation

---

## 📚 Applications

- Data interpolation and estimation
- Signal processing
- Graphics and animation
- Engineering simulations

---

## 📄 License

This project is open-source and available under the MIT License.

## 👨‍💻 Author

**Adrishikhar Chowdhury**  
📧 amiadrishikhar@gmail.com  
🌐 [Portfolio Website](https://adrishikharchowdhury.glitch.me)
