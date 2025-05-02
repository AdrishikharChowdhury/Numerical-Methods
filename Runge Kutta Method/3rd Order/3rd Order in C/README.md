# Runge-Kutta Third-Order (RK3) ODE Solver

## Overview
This C program implements the **third-order Runge-Kutta method** to numerically solve ordinary differential equations (ODEs) of the form:

```
dy/dx = f(x, y)
```

## Features
- Solves ODEs using the RK3 method (Kutta's third-order method)
- User-defined initial conditions (x₀, y₀)
- Adjustable step size (h)
- Calculates solution at any desired point (xₙ)
- Currently configured for the ODE: `dy/dx = x² + y²`

## Usage

### Compilation
```bash
gcc rk3_solver.c -o rk3 -lm
```

### Execution
```bash
./rk3
```

### Input Prompts
1. Initial guess x₀ (e.g., 0.0)
2. Initial value y₀ (e.g., 0.0)
3. Step size h (e.g., 0.1)
4. Target value xₙ to evaluate (e.g., 0.5)

## Example
```bash
Enter the initial guess x0: 0
Enter the initial guess y0: 0
Enter the step size h: 0.1
Enter the value to be found xn: 0.5
The value of y(0.500000) is 0.041667
```

## Code Structure
| Function | Description |
|----------|-------------|
| `f(x, y)` | Defines the ODE `dy/dx = x² + y²` |
| `rkMethod()` | Implements RK3 integration |
| `main()` | Handles I/O and program flow |

## Mathematical Method
The RK3 method uses:
```
k₁ = h·f(xₙ, yₙ)
k₂ = h·f(xₙ + h/2, yₙ + k₁/2)
k₃ = h·f(xₙ + h, yₙ - k₁ + 2k₂)
yₙ₊₁ = yₙ + (k₁ + 4k₂ + k₃)/6
xₙ₊₁ = xₙ + h
```

## Customization
To solve a different ODE, modify the `f(x, y)` function:
```c
double f(double x, double y) {
    return /* Your new ODE here */;
    // Example: return exp(x) + y;
}
```

## Advantages Over Lower-Order Methods
- More accurate than Euler (RK1) and RK2 methods
- Better stability for certain ODEs
- Still relatively simple to implement compared to RK4

## Limitations
- Fixed step size implementation
- No error estimation or adaptive step control
- Basic console interface
- Less accurate than RK4 for many problems

## License
This project is open source and available under the [MIT License](LICENSE).

## References
- Numerical Recipes: The Art of Scientific Computing
- Kutta, W. (1901), "Beitrag zur näherungsweisen Integration totaler Differentialgleichungen"

