
# Euler Method for Solving Ordinary Differential Equations (ODEs)

![Numerical Methods](https://img.shields.io/badge/Numerical-Methods-blue) ![ODE Solver](https://img.shields.io/badge/Type-ODE_Solver-green)

This C program implements the **Euler Method** to approximate solutions to first-order ordinary differential equations (ODEs).

## Mathematical Background

Given an initial value problem of the form:

$$
\frac{dy}{dx} = f(x, y), \quad y(x_0) = y_0
$$

The Euler Method approximates the solution at discrete points using:

$$
y_{n+1} = y_n + h \cdot f(x_n, y_n)
$$

where:
- $h$ is the step size
- $x_{n+1} = x_n + h$
- $f(x,y)$ is the derivative function

## Program Features

- Solves ODEs using explicit Euler integration
- User-configurable parameters:
  - Initial conditions ($x_0$, $y_0$)
  - Step size ($h$)
  - Target evaluation point ($x_n$)
- Currently implements the specific ODE:

  $$
  \frac{dy}{dx} = 3x^2 + 1
  $$

## Installation & Usage

### Compilation

```bash
gcc euler_method.c -o euler -lm
```

### Execution

```bash
./euler
```

### Input Prompts

```text
Enter the initial guess x0: [value]
Enter the initial guess y0: [value]
Enter the step size h: [value]
Enter the value to be found xn: [value]
```

## Example Calculation

For the differential equation:

$$
\frac{dy}{dx} = 3x^2 + 1, \quad y(0) = 1
$$

With parameters:
- $x_0 = 0$
- $y_0 = 1$
- $h = 0.1$
- $x_n = 1$

The program output will be:

```text
The value of y(1.000000) is 2.000000
```

## Code Structure

| Function           | Description |
|--------------------|-------------|
| `f(x, y)`          | Implements the ODE $\frac{dy}{dx} = 3x^2 + 1$ |
| `eulerMethod()`    | Performs the numerical integration |
| `main()`           | Handles I/O and program flow |

## Limitations

1. Fixed ODE implementation (modify `f(x,y)` for other equations)
2. No adaptive step size control
3. Basic error handling
4. Limited to first-order ODEs

## Extending the Code

To solve a different ODE, modify the `f(x, y)` function:

```c
double f(double x, double y) {
    return [your_equation_here];
}
```

## License

MIT License - See [LICENSE](LICENSE) file for details.

---
