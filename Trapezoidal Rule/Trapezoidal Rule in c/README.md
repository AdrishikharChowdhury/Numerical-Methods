# Trapezoidal Rule Implementation in C

## Overview
This program implements the **Trapezoidal Rule**, a numerical integration technique used to approximate the definite integral of a function. The rule works by dividing the area under a curve into small trapezoids and summing their areas to get an approximation of the integral.

## How It Works
1. **User Inputs:**
   - Upper limit (`b`) and lower limit (`a`) of the integral.
   - Number of subintervals (`n`).
   
2. **Trapezoidal Rule Formula:**
   
   \[
   I \approx \frac{h}{2} \left[ f(a) + 2 \sum_{i=1}^{n-1} f(x_i) + f(b) \right]
   \]
   
   where:
   - \( h = \frac{b-a}{n} \) is the step size.
   - \( x_i = a + i h \) are the intermediate points.
   
3. **Function Evaluation:**
   - The function \( f(x) = \frac{1}{\sqrt{1 + x^3}} \) is evaluated at each required point.
   
4. **Summation and Output:**
   - The program calculates the integral using the formula and prints the final answer.

## Compilation and Execution
To compile and run the program, use the following commands:

```sh
gcc trapezoidal_rule.c -o trapezoidal_rule -lm
./trapezoidal_rule
```
(The `-lm` flag is required to link the math library for `pow()` and `sqrt()` functions.)

## Function Details
### `double func(double x)`
- Defines the function to be integrated: \( f(x) = \frac{1}{\sqrt{1 + x^3}} \).

### `double trapezoidal(double a, double b, double h, int n)`
- Implements the Trapezoidal Rule.
- Computes function values at subintervals and applies the formula.
- Returns the final integral approximation.

## Example Input & Output
```
Enter upper limit: 4
Enter lower limit: 0
Enter number of subintervals: 10
The ans of the given integral is: 0.735758
```

## Advantages
- Simple and efficient for numerical integration.
- Works well for smooth functions.

## Limitations
- Less accurate for highly oscillatory functions.
- Requires more subintervals for higher precision.

## Author
Adrishikhar Chowdhury