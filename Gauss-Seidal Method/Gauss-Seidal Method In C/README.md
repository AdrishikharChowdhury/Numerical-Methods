# Gauss-Seidel Method for Solving Linear Systems

## Overview
This C program implements the **Gauss-Seidel iterative method** to solve systems of linear equations. The method is particularly efficient for large, sparse systems where direct methods may be computationally expensive.

## Features
- Solves n×n systems of linear equations
- Implements the iterative Gauss-Seidel algorithm
- Includes convergence checking with configurable tolerance
- Tracks and displays iteration progress
- Handles dynamic memory allocation for any system size
- Provides clear matrix input/output interface

## Mathematical Background
The Gauss-Seidel method solves systems of the form:

**Ax = b**

where:
- A is an n×n coefficient matrix
- x is the solution vector
- b is the right-hand side vector

The iterative update formula for each variable xᵢ is:

```
xᵢ^(k+1) = (bᵢ - Σ[j=1 to i-1] aᵢⱼxⱼ^(k+1) - Σ[j=i+1 to n] aᵢⱼxⱼ^(k)) / aᵢᵢ
```

## Usage

### Compilation
```bash
gcc gauss_seidel.c -o gauss_seidel -lm
```

### Execution
```bash
./gauss_seidel
```

### Input Requirements
1. Number of variables (n)
2. Coefficient matrix (n×n) and constant terms (n×1)
   - Entered as an augmented matrix (n rows × n+1 columns)
3. Initial guess vector (automatically initialized to zeros)

## Example

For the system:
```
4x + y = 1
x + 3y = 2
```

### Input:
```
Enter the no. of variables in the equation: 2
Enter the coefficients and constant terms of the equations:
Enter constant[1][1]: 4
Enter constant[1][2]: 1
Enter constant[1][3]: 1
Enter constant[2][1]: 1
Enter constant[2][2]: 3
Enter constant[2][3]: 2
```

### Output:
```
The matrix of equations and constant terms is:
4.000000    1.000000    1.000000
1.000000    3.000000    2.000000

Iteration 1:
0.250000    0.583333
Iteration 2:
0.104167    0.631944
...
The value of the variables are:
0.090909    0.636364
```

## Implementation Details

### Key Functions:
1. `inputEquations()`: Dynamically allocates memory and reads matrix input
2. `gaussSeidalMethod()`: Implements the iterative solver with convergence checking
3. `printMatrix()`: Displays the augmented matrix

### Convergence Criteria:
- Stops when the sum of absolute differences between iterations < 0.0001
- Maximum iterations limited to 100 (adjustable in code)

## Limitations
- Requires diagonal dominance for guaranteed convergence
- May need adjustment of tolerance for different systems
- No pivoting implemented (may fail for some systems)

## License
This project is open source and available under the [MIT License](LICENSE).

## References
1. Numerical Methods for Engineers by Chapra and Canale
2. Matrix Computations by Golub and Van Loan