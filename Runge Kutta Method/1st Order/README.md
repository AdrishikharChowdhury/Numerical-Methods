
# Runge-Kutta 1st Order Method (Euler's Method)

The **Runge-Kutta 1st Order Method** is the simplest numerical method used to solve ordinary differential equations (ODEs) with a given initial condition. It is better known as **Euler’s Method**.

---

## 📘 Overview

Euler’s Method approximates the solution to the first-order ODE:

```
dy/dx = f(x, y), with y(x₀) = y₀
```

By incrementally computing:

```
yₙ₊₁ = yₙ + h * f(xₙ, yₙ)
```

Where:
- `h` is the step size
- `(xₙ, yₙ)` is the current point
- `f(x, y)` is the derivative function

---

## 🧮 Formula Summary

```text
Given:
  dy/dx = f(x, y)
  y(x₀) = y₀

Then:
  y₁ = y₀ + h * f(x₀, y₀)
  y₂ = y₁ + h * f(x₁, y₁)
  ...
  yₙ₊₁ = yₙ + h * f(xₙ, yₙ)
```

---

## 💡 Example (Python)

Solving:

```
dy/dx = 3x + y/2,  with y(0) = 1 and h = 0.1
```

**Python Code:**

```python
def f(x, y):
    return 3 * x + y / 2

x = 0
y = 1
h = 0.1
x_target = 0.5

while x < x_target:
    y += h * f(x, y)
    x += h

print(f"Approximate value at x = {x_target} is y ≈ {y:.4f}")
```

---

## ✅ Features

- Simple and easy to implement
- Works well for small step sizes
- Good for educational purposes and understanding numerical methods

---

## 📁 Project Structure

```
rk1-euler/
├── euler_method.py     # Python implementation
├── README.md           # Documentation
```

---

## 🔍 Limitations

- Low accuracy for large step sizes
- Errors accumulate with each iteration
- Better alternatives: Runge-Kutta 2nd or 4th order

---

## 📚 License

MIT License — free to use and distribute.

---

## 🤝 Contributions

Contributions and improvements are welcome! Feel free to fork the project and open a pull 

---
