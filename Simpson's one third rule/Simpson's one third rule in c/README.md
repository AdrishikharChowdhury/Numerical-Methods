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
To use this program, compile and run the C code. Follow these steps:
1. Enter the upper limit of integration \( b \).
2. Enter the lower limit of integration \( a \).
3. Enter the number of subintervals \( n \) (must be even).
4. The program will compute and display the approximate integral using Simpson's 1/3rd Rule.

### Example Code (C Language)
```c
#include <stdio.h>
#include <math.h>

double func(double x);
double simpsonOnethird(double, double, double, int);

int main() {
    double a, b, h;
    int n;
    printf("Enter upper limit: ");
    scanf("%lf", &b);
    printf("Enter lower limit: ");
    scanf("%lf", &a);
    printf("Enter number of subintervals: ");
    scanf("%d", &n);
    
    h = (b - a) / n;
    double ans = simpsonOnethird(a, b, h, n);
    printf("The answer of the given integral is: %.6lf\n", ans);
    
    return 0;
}

double func(double x) {
    return 1 / sqrt(1 + pow(x, 3));
}

double simpsonOnethird(double a, double b, double h, int n) {
    double ft = func(a) + func(b), st = 0, tt = 0, ans;
    int i;
    for(i = 1; i < n; i++) {
        if(i % 2 != 0) {
            st += func(a + (i * h));
        } else {
            tt += func(a + (i * h));
        }
    }
    ans = (h / 3) * (ft + 4 * st + 2 * tt);
    return ans;
}
```

## Output Example
```
Enter upper limit: 4
Enter lower limit: 0
Enter number of subintervals: 10
The answer of the given integral is: 1.806327
```

## Requirements
- C Compiler (GCC, Clang, MSVC, etc.)

## Compilation and Execution
To compile and run the program using GCC:
```
gcc simpsons_rule.c -o simpsons_rule -lm
./simpsons_rule
```

## Notes
- The number of subintervals `n` must be even; otherwise, the result will not be accurate.
- Increasing `n` improves accuracy but also increases computational effort.

## License
This program is open-source and can be used freely for educational and research purposes.

