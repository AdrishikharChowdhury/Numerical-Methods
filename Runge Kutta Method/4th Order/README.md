
# Runge-Kutta 4th Order Method (RK4)

The **Runge-Kutta 4th Order Method (RK4)** is a widely used numerical technique to approximate solutions of first-order ordinary differential equations (ODEs). It provides high accuracy without requiring higher derivatives.

---

## 📘 Problem Statement

Given a first-order differential equation:

```
dy/dx = f(x, y), with initial condition y(x₀) = y₀
```

Our goal is to estimate the value of `y` at a desired `x` using the RK4 approach.

---

## 🔢 RK4 Formula

At each iteration step:

```
k1 = h * f(xₙ, yₙ)
k2 = h * f(xₙ + h/2, yₙ + k1/2)
k3 = h * f(xₙ + h/2, yₙ + k2/2)
k4 = h * f(xₙ + h, yₙ + k3)

yₙ₊₁ = yₙ + (1/6) * (k1 + 2*k2 + 2*k3 + k4)
```

Where:
- `h` is the step size
- `(xₙ, yₙ)` is the current point

---

## 💡 Example (Python)

Solving:

```
dy/dx = 3x + y/2,  with y(0) = 1, and h = 0.1
```

**Python Implementation:**

```python
def f(x, y):
    return 3 * x + y / 2

x = 0
y = 1
h = 0.1
x_target = 0.5

while x < x_target:
    k1 = h * f(x, y)
    k2 = h * f(x + h/2, y + k1/2)
    k3 = h * f(x + h/2, y + k2/2)
    k4 = h * f(x + h, y + k3)

    y += (k1 + 2*k2 + 2*k3 + k4) / 6
    x += h

print(f"Approximate value at x = {x_target} is y ≈ {y:.4f}")
```

---

## ✅ Features

- Accurate and stable for most ODEs
- Easy to implement in Python, C, Java, or MATLAB
- Does not require symbolic differentiation

---

## 📁 Folder Structure

```
rk4/
├── rk4.py         # Python script with RK4 implementation
├── README.md      # This file
```

---

## 📌 Use Cases

- Physics simulations
- Population growth models
- Engineering systems
- Any system modeled by dy/dx = f(x, y)

---

## ⚠️ Limitations

- Requires fixed step size `h`
- Not adaptive (RK45 or adaptive RK methods are better for stiff systems)

---

## 📃 License

MIT License — free to use and modify.

---

## 🤝 Contributions

Feel free to fork the project, improve the implementation, or open issues and pull requests. Contributions are welcome!

---
