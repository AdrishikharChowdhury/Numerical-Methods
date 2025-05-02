# Runge-Kutta Method (RK1/Euler Method) ODE Solver

## Overview
This C program implements the **first-order Runge-Kutta method** (also known as Euler's method) to numerically solve ordinary differential equations (ODEs) of the form:

```
dy/dx = f(x, y)
```

## Features
- Solves ODEs using the Euler method (RK1)
- User-defined initial conditions (x₀, y₀)
- Adjustable step size (h)
- Calculates solution at any desired point (xₙ)
- Currently configured for the ODE: `dy/dx = 3x² + 1`

## Usage

### Compilation
```bash
gcc rk1_solver.c -o rk1 -lm
```

### Execution
```bash
./rk1
```

### Input Prompts
1. Initial guess x₀ (e.g., 0.0)
2. Initial value y₀ (e.g., 1.0)
3. Step size h (e.g., 0.1)
4. Target value xₙ to evaluate (e.g., 1.0)

## Example
```bash
Enter the initial guess x0: 0
Enter the initial guess y0: 1
Enter the step size h: 0.1
Enter the value to be found xn: 1.0
The value of y(1.000000) is 2.000000
```

## Code Structure
| Function | Description |
|----------|-------------|
| `f(x, y)` | Defines the ODE `dy/dx = 3x² + 1` |
| `rkMethod()` | Implements Euler integration |
| `main()` | Handles I/O and program flow |

## Customization
To solve a different ODE, modify the `f(x, y)` function:
```c
double f(double x, double y) {
    return /* Your new ODE here */;
    // Example: return x + y; // for dy/dx = x + y
}
```

## Limitations
- Fixed step size implementation
- No error estimation or adaptive step control
- Basic console interface
- Currently implements only first-order RK (Euler method)

## Mathematical Background
The Euler method approximates:
```
yₙ₊₁ = yₙ + h·f(xₙ, yₙ)
xₙ₊₁ = xₙ + h
```
where h is the step size.

## License
This project is open source and available under the [MIT License](LICENSE).

