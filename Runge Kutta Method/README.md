
# Runge-Kutta Method (RK4)

The Runge-Kutta 4th Order Method (RK4) is a powerful numerical technique for solving ordinary differential equations (ODEs) when an analytical solution is difficult or impossible.

---

## 📘 Overview

Given a first-order differential equation:

```
dy/dx = f(x, y),  with  y(x₀) = y₀
```

The RK4 method estimates the value of `y` at a given point using:

```
k₁ = h * f(xₙ, yₙ)
k₂ = h * f(xₙ + h/2, yₙ + k₁/2)
k₃ = h * f(xₙ + h/2, yₙ + k₂/2)
k₄ = h * f(xₙ + h,   yₙ + k₃)

yₙ₊₁ = yₙ + (1/6) * (k₁ + 2k₂ + 2k₃ + k₄)
```

Where:
- `h` is the step size
- `(xₙ, yₙ)` is the current point

---

## 💡 Example (Python)

Solving:
```
dy/dx = 3x + y/2, with y(0) = 1, h = 0.1
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

## ✅ Applications

- Solving complex ODEs in engineering and physics
- Electrical circuit modeling
- Population dynamics and chemical reactions
- Simulations and real-time systems

---

## ⚠️ Advantages over Euler’s Method

- Much more accurate with same step size
- Better stability for stiff equations
- Fewer steps needed for same accuracy

---

## 📁 Project Structure

```
runge-kutta-method/
├── rk4.py         # Python implementation
├── README.md      # Documentation
```

---

## 📃 License

This project is licensed under the MIT License.

---

## 🤝 Contributions

Contributions are welcome!  
Feel free to open issues or submit pull requests to improve or extend this project.

---
