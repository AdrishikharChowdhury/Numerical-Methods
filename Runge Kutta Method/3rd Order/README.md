
# Runge-Kutta 3rd Order Method (RK3)

The **Runge-Kutta 3rd Order Method (RK3)** is a numerical method for approximating the solutions of first-order ordinary differential equations (ODEs). It provides a good compromise between accuracy and computational cost — more accurate than RK2, but simpler than RK4.

---

## 📘 Problem Statement

Given a first-order ODE:

```
dy/dx = f(x, y), with y(x₀) = y₀
```

We estimate the solution at `x = x₀ + h` using three weighted slope evaluations.

---

## 🔢 RK3 Formula

```text
k1 = h * f(xₙ, yₙ)
k2 = h * f(xₙ + h/2, yₙ + k1/2)
k3 = h * f(xₙ + h, yₙ - k1 + 2*k2)

yₙ₊₁ = yₙ + (1/6) * (k1 + 4*k2 + k3)
```

Where:
- `h` is the step size
- `k1`, `k2`, `k3` are slope estimates at different points

---

## 💡 Example (Python)

Solving:

```
dy/dx = 3x + y/2, with y(0) = 1, h = 0.1
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
    k1 = h * f(x, y)
    k2 = h * f(x + h/2, y + k1/2)
    k3 = h * f(x + h, y - k1 + 2 * k2)
    y += (k1 + 4 * k2 + k3) / 6
    x += h

print(f"Approximate value at x = {x_target} is y ≈ {y:.4f}")
```

---

## ✅ Features

- Better accuracy than RK1 and RK2
- Less computational effort than RK4
- Easy to implement for quick approximations

---

## 📁 Project Structure

```
rk3/
├── rk3_method.py    # Python implementation
├── README.md        # Documentation
```

---

## ⚠️ Limitations

- Not as widely used as RK4
- Slightly more complex than RK2 with similar cost
- RK4 is still the standard for precision

---

## 📚 License

MIT License — free to use and modify.

---

## 🤝 Contributions

Contributions are welcome! Feel free to fork the repository, submit pull requests, or open issues to improve or expand the project.

---
