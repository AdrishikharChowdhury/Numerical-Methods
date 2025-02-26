# Newton-Raphson Method Implementation in C

## Overview
This program implements the **Newton-Raphson Method**, an iterative numerical technique used to find the root of a given nonlinear equation. It is based on the first-order **Taylor series expansion** and converges rapidly when provided with a good initial guess.

## How It Works
1. **Finding an Initial Guess:**
   - The program searches for an interval `[a, b]` where `f(a) * f(b) < 0`, meaning a root exists in that interval.
   - The initial guess `x0` is set as the midpoint of this interval.

2. **Applying Newton-Raphson Iteration:**
   - The formula used for iteration is:
     \[
     x_{n+1} = x_n - \frac{f(x_n)}{f'(x_n)}
     \]
   - This process continues until the function value `f(x)` is close to zero (precision: `0.000001`).

3. **Handling Special Cases:**
   - If `f'(x) = 0`, the program prints an error message and terminates to avoid division by zero.

## Compilation and Execution
To compile and run the program, use:

```sh
gcc newton_raphson.c -o newton_raphson -lm
./newton_raphson
```
(The `-lm` flag links the math library required for `pow()` and `fabs()` functions.)

## Function Details
### `double func(double x)`
- Defines the function whose root is to be determined.
- Default function: \( f(x) = x^3 - 8x - 4 \).

### `double dfunc(double x)`
- Computes the derivative \( f'(x) = 3x^2 - 8 \) for use in the Newton-Raphson formula.

### `double newtonRaphson(double x)`
- Iteratively applies the Newton-Raphson method.
- Stops when `|f(x)| < 0.000001`.
- Handles cases where `dfunc(x) = 0` to prevent division errors.

## Example Output
```
The root of the equation is 3.051374
```

## Advantages
- **Fast Convergence:** Newton-Raphson has quadratic convergence for well-behaved functions.
- **Efficient:** Requires fewer iterations compared to methods like **Bisection**.

## Limitations
- Requires a good initial guess to ensure convergence.
- If `dfunc(x) = 0`, it may fail or require a modified approach.

## Author
Adrishikhar Chowdhury