# Simpson's 1/3rd Rule Program

## Overview
This program implements **Simpson's 1/3rd Rule** for numerical integration. The method approximates the integral of a given function over a specified interval using quadratic interpolation.

## Formula
Simpson's 1/3rd Rule is given by:

\[
\int_a^b f(x) dx \approx \frac{h}{3} \left[ f(x_0) + 4 \sum_{i=1,3,5,...}^{n-1} f(x_i) + 2 \sum_{i=2,4,6,...}^{n-2} f(x_i) + f(x_n) \right]
\]

where:
- \( h = \frac{b-a}{n} \) is the step size,
- \( n \) is the number of subintervals (must be even),
- \( x_0, x_1, ..., x_n \) are the sample points in the interval \([a, b]\).

## Implementation
The program follows these steps:
1. Define the function to integrate.
2. Set the limits of integration \( a \) and \( b \), and choose an even number of subintervals \( n \).
3. Apply Simpson's 1/3rd Rule to compute the numerical integral.

## Usage
To use this program, follow these steps:
1. Define the function \( f(x) \) that needs to be integrated.
2. Call the `simpsons_rule(f, a, b, n)` function with the appropriate parameters:
   - `f`: The function to integrate.
   - `a`: The lower limit of integration.
   - `b`: The upper limit of integration.
   - `n`: The number of subintervals (must be even).

### Example
```python
import numpy as np

def f(x):
    return 1 / np.sqrt(1 + x**3)

def simpsons_rule(f, a, b, n):
    if n % 2 == 1:
        raise ValueError("n must be even for Simpson's 1/3 rule.")
    
    h = (b - a) / n
    x = np.linspace(a, b, n + 1)
    y = f(x)
    
    result = y[0] + y[-1] + 4 * np.sum(y[1:n:2]) + 2 * np.sum(y[2:n-1:2])
    result *= h / 3
    
    return result

# Example usage
a, b, n = 0, 4, 10
result = simpsons_rule(f, a, b, n)
print("Approximate Integral:", result)
```

## Output
```
Approximate Integral: 1.8063
```

## Requirements
- Python 3.x
- NumPy

## Notes
- The number of subintervals `n` must be even; otherwise, the function raises an error.
- Increasing `n` improves accuracy but also increases computational effort.

## License
This program is open-source and can be used freely for educational and research purposes.