
# Fourth-Order Runge-Kutta ODE Solver

![Numerical Analysis](https://img.shields.io/badge/Category-Numerical_Analysis-blue)
![ODE Solver](https://img.shields.io/badge/Method-RK4-brightgreen)

A C implementation of the classical 4th-order Runge-Kutta method for solving initial value problems of ordinary differential equations.

## Mathematical Formulation

Solves first-order ODEs of the form:



```
dy/dx = f(x,y),   y(x₀) = y₀
```

where the RK4 method computes:

```
k₁ = h·f(xₙ, yₙ)
k₂ = h·f(xₙ + h/2, yₙ + k₁/2)
k₃ = h·f(xₙ + h/2, yₙ + k₂/2) 
k₄ = h·f(xₙ + h, yₙ + k₃)
yₙ₊₁ = yₙ + (k₁ + 2k₂ + 2k₃ + k₄)/6
```

## Current Problem

The program solves the specific nonlinear ODE:

```
dy/dx = x² + y²
```

## Program Usage

### Compilation
```bash
gcc rk4_solver.c -o rk4 -lm
```

### Execution
```bash
./rk4
```

### Input Requirements
1. Initial condition `x₀` (e.g. 0)
2. Initial value `y₀` (e.g. 0) 
3. Step size `h` (e.g. 0.1)
4. Target `xₙ` to evaluate (e.g. 0.5)

## Example Output
```bash
Enter the initial guess x0: 0
Enter the initial guess y0: 0  
Enter the step size h: 0.1
Enter the value to be found xn: 0.5
The value of y(0.500000) is 0.041791
```

## Code Structure

| Component     | Description                          |
|--------------|--------------------------------------|
| `f(x,y)`     | Defines the ODE to be solved         |
| `rkMethod()` | Implements the RK4 algorithm         |
| `main()`     | Handles I/O and program flow         |

## Customization

To solve a different ODE, modify the `f(x,y)` function:
```c
double f(double x, double y) {
    return /* Your new ODE here */;
    // Example: return x*y; // for dy/dx = xy
}
```

## Limitations

- Fixed step size implementation
- No error estimation
- Single ODE solver (not systems)
- Basic console interface

## References
- Numerical Recipes (Press et al.)
- Atkinson's Elementary Numerical Analysis

---
