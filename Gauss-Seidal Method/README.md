# Gauss-Seidel Method for Solving Linear Systems

## Overview
This repository contains an implementation of the **Gauss-Seidel iterative method** for solving systems of linear equations. The method is particularly useful for large, sparse systems where direct methods like Gaussian elimination are computationally expensive.

## Mathematical Background
The Gauss-Seidel method solves a system of linear equations represented as:

**Ax = b**

where:
- A is an n×n coefficient matrix
- x is the solution vector
- b is the right-hand side vector

The method iteratively improves the solution using the formula:

```
x_i^(k+1) = (b_i - Σ[j=1 to i-1] (a_ij * x_j^(k+1)) - Σ[j=i+1 to n] (a_ij * x_j^(k))) / a_ii
```

## Features
- Solves systems of linear equations iteratively
- Handles diagonally dominant or symmetric positive definite matrices
- Includes convergence checking
- Configurable maximum iterations and tolerance
- Simple, clean implementation in C

## Usage

### Compilation
```bash
gcc gauss_seidel.c -o gauss_seidel -lm
```

### Execution
```bash
./gauss_seidel
```

### Input Format
1. Size of the system (n)
2. Coefficient matrix A (n×n)
3. Right-hand side vector b (n×1)
4. Initial guess vector x (n×1)
5. Maximum number of iterations
6. Tolerance for convergence

## Example
For the system:
```
4x₁ + x₂ = 1
x₁ + 3x₂ = 2
```

Input would be:
```
2
4 1
1 3
1 2
0 0
100
0.0001
```

Output:
```
Solution after 7 iterations:
x[0] = 0.090909
x[1] = 0.636364
```

## Implementation Details
The main components are:

1. **Matrix Input**: Reads the coefficient matrix, right-hand side vector, and initial guess
2. **Iteration Loop**: Performs Gauss-Seidel updates until convergence
3. **Convergence Check**: Stops when the difference between iterations is below tolerance
4. **Output**: Displays the solution vector and iteration count

## Convergence Criteria
The method is guaranteed to converge if:
- The matrix is strictly diagonally dominant, or
- The matrix is symmetric and positive definite

## Limitations
- May not converge for all systems
- Slower than direct methods for small systems
- Requires initial guess

## License
This project is open source and available under the [MIT License](LICENSE).

## References
1. Numerical Analysis by Burden and Faires
2. Matrix Computations by Golub and Van Loan