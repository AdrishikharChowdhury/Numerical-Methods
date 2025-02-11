
# Bisection Method

The **Bisection Method** is a simple and reliable numerical algorithm used to find roots of continuous functions. It works by repeatedly halving an interval where the function changes sign, gradually narrowing down to the root.

---

## How It Works

1. **Choose an Interval \([a, b]\):**  
   Select values `a` and `b` such that the function changes sign between them:
   \[
   f(a) \times f(b) < 0
   \]
   This ensures there's at least one root in the interval.

2. **Calculate Midpoint:**  
   Find the midpoint:
   \[
   c = \frac{a + b}{2}
   \]

3. **Evaluate the Function at Midpoint:**  
   - If \( f(c) = 0 \) (or is within a small tolerance), `c` is the root.
   - If \( f(c) \times f(a) < 0 \), the root lies between `a` and `c`. Update `b = c`.
   - Otherwise, the root lies between `c` and `b`. Update `a = c`.

4. **Repeat Until Convergence:**  
   Continue halving the interval until the width of the interval \([a, b]\) is less than the desired tolerance.

---

## Pseudocode

```plaintext
function bisection(a, b, tolerance):
    if f(a) * f(b) >= 0:
        return "No root in the interval."

    repeat until (b - a) < tolerance:
        c = (a + b) / 2
        if f(c) == 0 or (b - a) / 2 < tolerance:
            return c  # Root found
        else if f(c) * f(a) < 0:
            b = c
        else:
            a = c

    return (a + b) / 2  # Approximate root
```

---

## Example Code (C)

```c
#include <stdio.h>
#include <math.h>

// Function to find root of
double func(double x) {
    return pow(x, 4) - x - 10;
}

// Bisection Method Implementation
double bisection(double a, double b, double tolerance) {
    if (func(a) * func(b) >= 0) {
        printf("No root found in the given interval.\n");
        return -1;
    }

    double c;
    while ((b - a) >= tolerance) {
        c = (a + b) / 2;

        if (fabs(func(c)) < 1e-9) {  // Close enough to zero
            return c;
        }

        if (func(c) * func(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    return (a + b) / 2;  // Approximate root
}

int main() {
    double a = 1, b = 2;
    double root = bisection(a, b, 0.00001);

    if (root != -1) {
        printf("The root is approximately: %.5lf\n", root);
    }

    return 0;
}
```

---

## How to Run

1. **Compile the Code:**
   ```bash
   gcc bisection.c -o bisection -lm
   ```

2. **Run the Executable:**
   ```bash
   ./bisection
   ```

3. **Expected Output:**
   ```
   The root is approximately: 1.85558
   ```

---

## Key Parameters

- **`a` and `b`**: The interval where the function changes sign.
- **`tolerance`**: The acceptable error margin for the root approximation.
- **`func(x)`**: The function for which you are finding the root.

---

## Applications

- Solving nonlinear equations in mathematics and engineering.
- Approximating solutions where analytical methods are difficult.

---

## Limitations

- **Slow Convergence**: It converges linearly, which can be slow compared to methods like Newton-Raphson.
- **Requires Bracketing**: The initial interval must contain a sign change, meaning you need some knowledge of where the root might be.

---

## Conclusion

The **Bisection Method** is a robust and easy-to-implement numerical technique for finding roots. It’s especially useful when you need guaranteed convergence and the function behavior is continuous.
