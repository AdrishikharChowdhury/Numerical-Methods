# Runge-Kutta Second-Order (RK2) ODE Solver

## Overview
This C program implements the **second-order Runge-Kutta method** (also known as the midpoint method) to numerically solve ordinary differential equations (ODEs) of the form:

```
dy/dx = f(x, y)
```

## Features
- Solves ODEs using the RK2 (midpoint) method
- User-defined initial conditions (x₀, y₀)
- Adjustable step size (h)
- Calculates solution at any desired point (xₙ)
- Currently configured for the ODE: `dy/dx = x² + y²`

## Usage

### Compilation
```bash
gcc rk2_solver.c -o rk2 -lm
```

### Execution
```bash
./rk2
```

### Input Prompts
1. Initial guess x₀ (e.g., 0.0)
2. Initial value y₀ (e.g., 0.0)
3. Step size h (e.g., 0.1)
4. Target value xₙ to evaluate (e.g., 1.0)

## Example
```bash
Enter the initial guess x0: 0
Enter the initial guess y0: 0
Enter the step size h: 0.1
Enter the value to be found xn: 0.5
The value of y(0.500000) is 0.041791
```

## Code Structure
| Function | Description |
|----------|-------------|
| `f(x, y)` | Defines the ODE `dy/dx = x² + y²` |
| `rkMethod()` | Implements RK2 integration |
| `main()` | Handles I/O and program flow |

## Mathematical Method
The RK2 method uses:
```
k₁ = h·f(xₙ, yₙ)
k₂ = h·f(xₙ + h, yₙ + k₁)
yₙ₊₁ = yₙ + (k₁ + k₂)/2
xₙ₊₁ = xₙ + h
```

## Customization
To solve a different ODE, modify the `f(x, y)` function:
```c
double f(double x, double y) {
    return /* Your new ODE here */;
    // Example: return sin(x) + cos(y);
}
```

## Limitations
- Fixed step size implementation
- No error estimation or adaptive step control
- Basic console interface
- Currently implements only second-order RK method

## License
This project is open source and available under the [MIT License](LICENSE).

