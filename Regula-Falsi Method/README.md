# Regula-Falsi Method

## Overview
The **Regula-Falsi Method** (False Position Method) is a root-finding algorithm used to find the root of a function by linearly interpolating between two points. It is a **bracketing method**, ensuring convergence if the root lies within the interval.

## How It Works
1. Choose two initial guesses **x0** and **x1** such that **f(x0) * f(x1) < 0**.
2. Compute the new approximation **x2** using the formula:
   
   \[
   x2 = x1 - \frac{f(x1) (x1 - x0)}{f(x1) - f(x0)}
   \]
3. Check the sign of **f(x2)** and update either **x0** or **x1**.
4. Repeat until the desired accuracy is reached.

## Advantages
- Ensures convergence if a root exists in the interval.
- Faster than the **Bisection Method**.

## Disadvantages
- Convergence may be slow if the function is not well-behaved.
- Unlike **Newton-Raphson**, it does not always guarantee quadratic convergence.

## Applications
- Solving nonlinear equations in engineering and physics.
- Used in numerical computing for real-world problems.

## Example Usage
If solving **f(x) = x^3 - x - 2**, choose **x0 = 1** and **x1 = 2**, and apply the formula iteratively to find the root.

## Author
Adrishikhar Chowdhury

