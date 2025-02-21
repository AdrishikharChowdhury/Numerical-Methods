
# Bisection Method in C

## Overview
This program implements the **Bisection Method** to find the root of a given mathematical function. The method is applied to the function:

\[
f(x) = x^3 - 9x + 1
\]

Users can modify the function to find roots of different equations.

## How It Works
1. The program searches for an interval `[a, b]` where the function changes sign (`f(a) * f(b) < 0`).
2. The **Bisection Method** is applied to repeatedly narrow down the interval until the root is approximated within a given tolerance (`0.000001`).
3. The root is printed as output.

## Files
- `main.c` - Contains the C program implementing the Bisection Method.

## Compilation and Execution
To compile and run the program, use the following commands:

```sh
gcc main.c -o bisection -lm
./bisection
```
(The `-lm` flag links the math library.)

## Function Details

### `double func(double x)`
- Defines the function whose root is to be found.
- Default function: \( f(x) = x^3 - 9x + 1 \).
- Can be modified for different equations.

### `double bisection(double a, double b, double tol)`
- Implements the **Bisection Method** algorithm.
- Takes an interval `[a, b]` and a tolerance value `tol`.
- Returns the approximate root or `-1` if the method fails.

## Example Output
```
The root is approximately: 0.110953
```

## Customization
To use a different function, modify `func(x)`:

```c
double func(double x) {
    return x*x - 4; // Example: Finding roots of x² - 4
}
```

## Limitations
- Only works if a valid interval `[a, b]` with `f(a) * f(b) < 0` exists.
- Converges slowly compared to other root-finding methods like Newton-Raphson.

## Author
Adrishkhar Chowdhury
```
