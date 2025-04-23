# 📌 Lagrange Interpolation in C

This C program implements **Lagrange's Interpolation** method to estimate the value of a function at a given point using a set of known data pairs.

---

## 📋 Description

Lagrange Interpolation is a numerical technique used to construct a polynomial that passes through a given set of data points. This implementation:

- Accepts `n` data points from the user.
- Accepts a value `x` at which interpolation is to be calculated.
- Computes the interpolated value using the Lagrange polynomial.

---

## 🧮 Formula Used

Given `n` data points `(x₀, y₀), (x₁, y₁), ..., (xₙ₋₁, yₙ₋₁)`, the interpolation polynomial is:

```
P(x) = Σ [yᵢ * Lᵢ(x)]  for i = 0 to n-1

Where:
Lᵢ(x) = Π [(x - xⱼ) / (xᵢ - xⱼ)] for j ≠ i
```

---

## 🛠️ How to Compile and Run

### 🧑‍💻 Compile:
```bash
gcc lagrange.c -o lagrange
```

### ▶️ Run:
```bash
./lagrange
```

---

## 📥 Sample Input

```
Enter the no. of data pairs: 3
Enter the data pairs:
Enter the datatable[0][0]: 1
Enter the datatable[0][1]: 2
Enter the datatable[0][2]: 4
Enter the datatable[1][0]: 1
Enter the datatable[1][1]: 4
Enter the datatable[1][2]: 16
Enter the interpolating point: 3
```

## 📤 Sample Output

```
The value at the interpolating point 3.000000 is 9.000000
```

---

## 📁 File Structure

- `lagrange.c` – Main C program implementing the interpolation logic.

---

## 📚 Applications

- Estimating intermediate values from known data.
- Computer graphics and image processing.
- Signal reconstruction.
- Curve fitting in engineering and science.

---

## 📄 License

This project is open-source and free to use for educational purposes.

---

## 🙌 Acknowledgment

Made for practicing numerical methods and interpolation techniques in C programming.

## 👨‍💻 Author

**Adrishikhar Chowdhury**  
📧 amiadrishikhar@gmail.com  
🌐 [Portfolio Website](https://adrishikharchowdhury.glitch.me)
