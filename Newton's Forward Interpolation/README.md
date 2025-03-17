# 📌 **Newton's Forward Interpolation Method**  

Newton’s Forward Interpolation is a numerical technique used to estimate the value of a function at a given point when the values of the function are known at discrete points. It is particularly useful when data points are **equally spaced**.

---

## 🚀 **Formula**  
The Newton's Forward Difference Interpolation formula is:  

\[
f(x) = f(x_0) + u \Delta f(x_0) + \frac{u(u-1)}{2!} \Delta^2 f(x_0) + \frac{u(u-1)(u-2)}{3!} \Delta^3 f(x_0) + \dots
\]

where:  
- \( u = \frac{x - x_0}{h} \)  
- \( h \) is the step size (difference between consecutive \( x \)-values)  
- \( \Delta f(x) \) represents the **forward differences**  

---

## 🔹 **How It Works**
1. Construct a **forward difference table** using given data points.
2. Compute the **forward differences** (\( \Delta f(x) \)).
3. Use the formula to interpolate the value of \( f(x) \) at a given \( x \).

---

## 📂 **Files**
- `main.c` → C program implementing Newton’s Forward Interpolation  
- `README.md` → This documentation  
- `data.txt` (optional) → Sample dataset for testing  

---

## 🔧 **Usage**
### 1️⃣ **Compile the C program:**
```sh
gcc -o newton_forward_interpolation main.c -Wall -Wextra -g
```
### 2️⃣ **Run the program:**
```sh
./newton_forward_interpolation
```
### 3️⃣ **Input:**
- Number of data points  
- Values of \( x \) and corresponding \( f(x) \)  
- Value of \( x \) where interpolation is required  

### 4️⃣ **Output:**
The program prints the interpolated value at the given \( x \).  

---

## 📌 **Example**
### **Input:**
```
Enter the number of data points: 4
Enter x0, f(x0): 1 1
Enter x1, f(x1): 2 8
Enter x2, f(x2): 3 27
Enter x3, f(x3): 4 64
Enter the value of x to interpolate: 2.5
```
### **Output:**
```
The estimated value of f(2.5) is: 15.625
```

---

## ✅ **Advantages**
✔ Simple to implement for equally spaced data  
✔ Efficient for small datasets  
✔ Can be extended to higher-order interpolations  

## ⚠ **Limitations**
❌ Requires **equally spaced data points**  
❌ Accuracy decreases as **degree of interpolation increases**  
❌ Not suitable for large datasets due to increasing computational complexity  

---

## 🛠 **Further Improvements**
- Implementing **Newton’s Backward Interpolation** for data points near the end  
- Using **Divided Difference Interpolation** for unequally spaced data  
- Optimizing computational efficiency for large datasets  

---

## 👨‍💻 **Author**
**[Adrishikhar Chowdhury]**  
📧 Email: amiadrishikhar@gmail.com  
🌐 GitHub: [Adrishikhar Chowdhury](https://github.com/AdrishikharChowdhury)  

---