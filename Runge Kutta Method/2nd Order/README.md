
# Runge-Kutta 2nd Order Method (RK2)

The **Runge-Kutta 2nd Order Method (RK2)** is a numerical method for solving first-order ordinary differential equations (ODEs). It improves upon Euler’s method by using an average slope, resulting in better accuracy.

---

## 📘 Problem Statement

Given an ODE:

```
dy/dx = f(x, y), with y(x₀) = y₀
```

The RK2 method estimates the value of `y` at `x = x₀ + h` using two slope evaluations:

---

## 🔢 RK2 Formula

```
k1 = h * f(xₙ, yₙ)
k2 = h * f(xₙ + h, yₙ + k1)

yₙ₊₁ = yₙ + 0.5 * (k1 + k2)
```

Other variants like the **Midpoint Method** modify how `k2` is calculated, but the core idea remains using an average of two slopes.

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
    k1 = h * f(x, y)
    k2 = h * f(x + h, y + k1)
    y += 0.5 * (k1 + k2)
    x += h

print(f"Approximate value at x = {x_target} is y ≈ {y:.4f}")
```

---

## ✅ Features

- More accurate than Euler's method
- Still simple to implement
- Good trade-off between performance and accuracy

---

## 📁 Project Structure

```
rk2/
├── rk2_method.py    # Python implementation
├── README.md        # Documentation
```

---

## ⚠️ Limitations

- Still not as accurate as RK4 for small `h`
- Not adaptive to changing error like RK45

---

## 📚 License

MIT License — free to use and modify.

---

## 🤝 Contributions

Feel free to open issues or submit pull requests for improvements. Contributions are welcome!

---
