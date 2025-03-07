# Weddle's Rule Program

## Overview
This program implements **Weddle's Rule** for numerical integration. Weddle’s Rule is a higher-order Newton-Cotes formula used for approximating the integral of a given function over a specified interval. It provides improved accuracy by using a specific set of weights over six subintervals.

## Formula
Weddle's Rule is given by:

\[
\int_a^b f(x) dx \approx \frac{3h}{10} \left[ f(x_0) + 5f(x_1) + f(x_2) + 6f(x_3) + f(x_4) + 5f(x_5) + f(x_6) \right]
\]

where:
- \( h = \frac{b-a}{n} \) is the step size,
- \( n \) must be a multiple of 6,
- \( x_0, x_1, ..., x_n \) are the sample points in the interval \([a, b]\).

## Implementation
The program follows these steps:
1. Define the function to integrate.
2. Set the limits of integration \( a \) and \( b \), and choose \( n \) such that it is a multiple of 6.
3. Apply Weddle's Rule iteratively over groups of 6 subintervals to compute the numerical integral.

## Usage
To use this program, follow these steps:
1. Define the function \( f(x) \) that needs to be integrated.
2. Call the `weddles_rule(f, a, b, n)` function with the appropriate parameters:
   - `f`: The function to integrate.
   - `a`: The lower limit of integration.
   - `b`: The upper limit of integration.
   - `n`: The number of subintervals (must be a multiple of 6).

### Example Code (Python)
```python
import numpy as np

def weddles_rule(f, a, b, n):
    if n % 6 != 0:
        raise ValueError("n must be a multiple of 6 for Weddle's Rule.")
    
    h = (b - a) / n
    x = np.linspace(a, b, n + 1)
    y = f(x)

    # Weddle's Rule weights for one segment of six intervals: [1, 5, 1, 6, 1, 5, 1]
    weights = np.array([1, 5, 1, 6, 1, 5, 1])
    
    # Sum using Weddle's Rule
    result = 0
    for i in range(0, n, 6):
        result += np.sum(weights * y[i:i+7])
    
    result *= (3 * h / 10)
    return result

def f(x):
    return 1 / (1 + x**2)

# Example usage
a, b, n = 0, 2, 12
result = weddles_rule(f, a, b, n)
print("Approximate Integral:", result)
```

## Output Example
```
Approximate Integral: 1.107150
```

## Requirements
- Python 3.x
- NumPy

## Notes
- The number of subintervals `n` must be a multiple of 6; otherwise, the function raises an error.
- Increasing `n` improves accuracy but also increases computational effort.

## License
This program is open-source and can be used freely for educational and research purposes.