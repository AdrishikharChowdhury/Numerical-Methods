# Weddle's Rule Program (C Implementation)

## Overview
This program implements **Weddle's Rule** for numerical integration in C. Weddle’s Rule is a Newton-Cotes integration method that approximates the integral of a function over a given interval using a fixed set of weights for six subintervals.

## Formula
Weddle's Rule is given by:

\[
\int_a^b f(x) dx \approx \frac{3h}{10} \sum \left[ f(x_0) + 5f(x_1) + f(x_2) + 6f(x_3) + f(x_4) + 5f(x_5) + f(x_6) \right]
\]

where:
- \( h = \frac{b-a}{n} \) is the step size,
- \( n \) must be a multiple of 6,
- \( x_0, x_1, ..., x_n \) are the sample points in the interval \([a, b]\).

## Implementation
The program follows these steps:
1. Define the function to integrate.
2. Accept user input for the upper and lower limits of integration \( a \) and \( b \), and the number of subintervals \( n \).
3. Ensure that \( n \) is a multiple of 6.
4. Apply Weddle's Rule iteratively to compute the numerical integral.

## Usage
To use this program:
1. Compile the C code using a C compiler (e.g., GCC).
2. Run the program and enter the required inputs.
3. The program will compute and display the approximate integral using Weddle's Rule.

### Example Code (C Language)
```c
#include <stdio.h>
#include <math.h>

double func(double x);
double weddlesRule(double, double, int);

int main() {
    double a, b, h;
    int n;
    printf("Enter the upper limit of the integral: ");
    scanf("%lf", &b);
    printf("Enter the lower limit of the integral: ");
    scanf("%lf", &a);
    printf("Enter the number of subintervals: ");
    scanf("%d", &n);
    
    if (n % 6 != 0) {
        printf("The number of subintervals must be a multiple of 6\n");
        return 0;
    }
    
    h = (b - a) / n;
    double result = weddlesRule(a, h, n);
    printf("The result of the integral is: %lf\n", result);
    
    return 0;
}

double func(double x) {
    return 1 / (1 + pow(x, 2));
}

double weddlesRule(double a, double h, int n) {
    double sum = 0;
    for (int i = 0; i < n / 6; i++) {
        sum += func(a + (6 * i) * h) + 5 * func(a + (6 * i + 1) * h) +
               func(a + (6 * i + 2) * h) + 6 * func(a + (6 * i + 3) * h) +
               func(a + (6 * i + 4) * h) + 5 * func(a + (6 * i + 5) * h) +
               func(a + (6 * i + 6) * h);
    }
    return (3 * h / 10) * sum;
}
```

## Output Example
```
Enter the upper limit of the integral: 2
Enter the lower limit of the integral: 0
Enter the number of subintervals: 12
The result of the integral is: 1.107150
```

## Requirements
- C Compiler (GCC, Clang, MSVC, etc.)

## Compilation and Execution
To compile and run the program using GCC:
```
gcc weddles_rule.c -o weddles_rule -lm
./weddles_rule
```

## Notes
- The number of subintervals `n` must be a multiple of 6; otherwise, the program will exit with an error message.
- Increasing `n` improves accuracy but also increases computational effort.

## License
This program is open-source and can be used freely for educational and research purposes.