# Regula-Falsi Method Implementation in C

## Overview
This program implements the **Regula-Falsi (False Position) Method** to find the root of a given nonlinear equation. The method iteratively refines an estimate for the root by interpolating a straight line between two points on the function and computing where it crosses the x-axis.

## How It Works
1. The program first scans for an interval `[a, b]` where `f(a) * f(b) < 0` (i.e., the function changes sign, indicating a root exists within the interval).
2. The **Regula-Falsi formula** is applied:
   
   \[
   c = \frac{a \cdot f(b) - b \cdot f(a)}{f(b) - f(a)}
   \]
   
3. The interval `[a, b]` is updated based on the sign of `f(c)`, and the process repeats until convergence.
4. The root is printed once it meets the accuracy threshold (`0.0000001`).

## Files
- `main.c` - Contains the C implementation of the Regula-Falsi Method.

## Compilation and Execution
To compile and run the program, use the following commands:

```sh
gcc main.c -o regula_falsi -lm
./regula_falsi
```
(The `-lm` flag is required to link the math library.)

## Function Details
### `double func(double x)`
- Defines the function whose root is being determined.
- Default function: \( f(x) = x^3 - 3x - 5 \)
- Can be modified for different equations.

### `double regulaFalsi(double a, double b)`
- Implements the Regula-Falsi Method.
- Takes an interval `[a, b]` and iteratively finds the root.
- Returns the root or `-1` if no valid root exists.

## Example Output
```
The root of the equation is 2.279086
```

## Limitations
- Requires an initial interval `[a, b]` with a sign change.
- May converge slowly for some functions.

## Author
Adrishikhar Chowdhury