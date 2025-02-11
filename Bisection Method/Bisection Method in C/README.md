# Bisection Method in C

This project demonstrates the implementation of the **Bisection Method** in C, a numerical technique used to find roots of continuous functions. The algorithm repeatedly bisects an interval and selects subintervals where the function changes sign, gradually narrowing down to an approximate root.

---

## How It Works

1. **Initial Interval Search:**  
   The program automatically searches for an interval \([a, b]\) where the function \(f(x)\) changes sign. This ensures that a root exists in the interval.

2. **Bisection Algorithm:**  
   The midpoint \(c = \frac{a + b}{2}\) is calculated repeatedly. Based on the sign of \(f(c)\), the interval is halved until the root is approximated within a specified tolerance.

---

## Function Definition

The function whose root is being found is:

\[
f(x) = x^4 - x - 10
\]

---

## Files

- `bisection.c`: Contains the implementation of the Bisection Method.

---

## Code Overview

```c
#include <stdio.h>
#include <math.h>

// Function definition: f(x) = x^4 - x - 10
double func(double x) {
    return pow(x, 4) - x - 10;
}

// Bisection Method implementation
double bisection(double a, double b, double tol) {
    if (func(a) * func(b) >= 0) {
        return -1;  // No root in the interval
    }

    double c;
    while ((b - a) >= tol) {
        c = (a + b) / 2;
        if (func(c) == 0.0) {  // Exact root found
            return c;
        } else if (func(c) > 0) {
            b = c;  // Root lies in the left subinterval
        } else {
            a = c;  // Root lies in the right subinterval
        }
    }

    return (a + b) / 2;  // Approximate root when interval is sufficiently small
}

int main() {
    double i, a, b, c;

    // Automatically find an interval where the function changes sign
    for (i = 0; i < 100; i++) {
        if (func(i) * func(i + 1) < 0) {
            a = i;
            b = i + 1;
            break;
        }
    }

    c = bisection(a, b, 0.000001);  // Call bisection with a tolerance of 1e-6

    if (c == -1) {
        printf("Bisection method failed to find a root in the given interval.\n");
    } else {
        printf("The root is approximately: %lf\n", c);
    }

    return 0;
}
```

---

## How to Compile and Run

1. **Compile the Code:**

   ```bash
   gcc bisection.c -o bisection -lm
   ```

   The `-lm` flag links the math library for the `pow` function.

2. **Run the Program:**

   ```bash
   ./bisection
   ```

---

## Expected Output

```
The root is approximately: 1.855583
```

This output indicates the approximate root of the equation \(x^4 - x - 10 = 0\) found within the specified tolerance.

---

## Explanation of Parameters

- **`a`, `b`**: Initial interval endpoints where the function changes sign.
- **`tol`**: Tolerance level for convergence. The algorithm stops when the interval is smaller than this value.
- **`func(x)`**: The mathematical function for which the root is calculated.

---

## Advantages of the Bisection Method

- **Guaranteed Convergence**: The method always converges if the initial interval is chosen correctly.
- **Simple to Implement**: The algorithm is straightforward and doesn't require derivative calculations.

---

## Limitations

- **Slow Convergence**: The bisection method is slower compared to other root-finding methods like Newton-Raphson.
- **Requires Bracketing**: You must know an interval where the function changes sign.

---

## License

This project is open-source and available under the [MIT License](LICENSE).
