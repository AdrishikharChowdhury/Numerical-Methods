# Trapezoidal Rule

## Overview
The **Trapezoidal Rule** is a numerical integration technique used to approximate the definite integral of a function. It works by dividing the area under a curve into small trapezoids and summing their areas.

## Formula
For a function \( f(x) \) over the interval \([a, b]\), the **Trapezoidal Rule** is given by:

\[
I \approx \frac{h}{2} \left[ f(a) + 2 \sum_{i=1}^{n-1} f(x_i) + f(b) \right]
\]

where:
- \( h = \frac{b-a}{n} \) (step size)
- \( n \) is the number of subintervals
- \( x_i = a + i h \) (intermediate points)

## Implementation Steps
1. **Choose the function** \( f(x) \) to integrate.
2. **Define the integration limits** \( a \) and \( b \).
3. **Divide the interval** into \( n \) subintervals of equal width.
4. **Apply the Trapezoidal Rule formula** to approximate the integral.

## Advantages
- Simple and easy to implement.
- Works well for smooth functions.
- Provides good accuracy with more subintervals.

## Limitations
- Less accurate for highly oscillatory functions.
- Requires a large number of subintervals for higher precision.

## Applications
- Estimating definite integrals in physics and engineering.
- Approximating areas under curves in data analysis.
- Solving real-world problems in finance, biology, and economics.

## Example
To approximate \( \int_0^1 (x^2) dx \) using the Trapezoidal Rule with \( n = 4 \):

```
Subintervals: 0, 0.25, 0.5, 0.75, 1.0
Function values: f(0), f(0.25), ..., f(1)
Computed Integral ≈ 0.333
```

## Author
Adrishikhar Chowdhury