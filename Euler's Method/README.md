
# Euler's Method

Euler's Method is a simple numerical technique for solving ordinary differential equations (ODEs) with a given initial value. It approximates the solution at discrete points by stepping forward using the slope of the function.

---

## 📘 Overview

Given a first-order ODE:

```
dy/dx = f(x, y), with y(x₀) = y₀
```

Euler’s method estimates the next value using:

```
yₙ₊₁ = yₙ + h * f(xₙ, yₙ)
```

Where:
- `h` is the step size
- `f(x, y)` is the derivative function
- `(x₀, y₀)` is the initial condition

---

## 🧮 Formula Recap

Update rule:

```
y_next = y_current + h * f(x_current, y_current)
```

Repeat this for as many steps as needed to reach the target `x`.

---

## 💡 Example (Python)

**Problem:**

```
dy/dx = 3x + y/2, with y(0) = 1, step size h = 0.1
```

**Solution (Python):**

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

## ✅ Applications

- Solving ODEs in physics and engineering
- Population modeling
- Circuit analysis
- Chemical reaction simulations

---

## ⚠️ Limitations

- Accuracy decreases with large `h`
- Errors accumulate over steps
- Better alternatives: **Runge-Kutta**, **Modified Euler**, etc.

---

## 📁 Project Structure

```
euler-method/
├── euler.py       # Python implementation
├── README.md      # This documentation
```

---

## 📄 License

This project is licensed under the MIT License.

---

## 🤝 Contributions

Contributions are welcome! Feel free to open issues or submit pull requests to improve or extend this project.

---
