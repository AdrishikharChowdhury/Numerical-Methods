# Gauss Elimination Method in C

This repository contains a C program that solves a system of `n` linear equations with `n` variables using the **Gauss Elimination method**. The program takes the augmented matrix as input from the user, performs the necessary calculations, and outputs the unique solution for the variables.

## 🚀 Features

- **Interactive Input**: Prompts the user to enter the number of variables and the coefficients for each equation.
- **Dynamic Memory Allocation**: Uses `malloc` to handle systems of any size (`n x n`).
- **Direct Solution**: Implements both the forward elimination and back substitution phases to compute the final solution.


## ⚙️ Algorithm Implemented

The program follows the standard two-phase process of Gauss Elimination:

1. **Forward Elimination**: The program systematically converts the input augmented matrix into an **upper triangular matrix**. It does this by creating zeros in the lower triangle of the coefficient matrix, using elementary row operations.
2. **Back Substitution**: Once the matrix is in upper triangular form, the program solves for the variables starting from the last equation (which has only one unknown) and working its way up.

## 🛠️ How to Compile and Run

#### Prerequisites

You need a C compiler, such as **GCC**, installed on your system.

#### Steps

1. **Save the Code**: Save the provided code into a file named `gauss.c`.
2. **Compile the Code**: Open your terminal, navigate to the directory where you saved the file, and compile it with the following command:

```bash
gcc -o gauss gauss.c
```

This creates an executable file named `gauss`.
3. **Run the Program**: Execute the program from your terminal:

```bash
./gauss
```

The program will then guide you through entering the necessary data.

## 🧪 Example Usage

Let's solve the following system:

$$
\begin{cases}
2x_1 + x_2 - x_3 = 8 \\
-3x_1 - x_2 + 2x_3 = -11 \\
-2x_1 + x_2 + 2x_3 = -3
\end{cases}
$$

#### Interaction with the Program:

```
Enter the no. of unknown variables: 3
Enter the coefficients and constant terms of the equations:
Enter constant[1][1]: 2
Enter constant[1][2]: 1
Enter constant[1][3]: -1
Enter constant[1][4]: 8
Enter constant[2][1]: -3
Enter constant[2][2]: -1
Enter constant[2][3]: 2
Enter constant[2][4]: -11
Enter constant[3][1]: -2
Enter constant[3][2]: 1
Enter constant[3][3]: 2
Enter constant[3][4]: -3
```


#### Output:

```
The ans of this equations is: 2.000000        3.000000        -1.000000
```

This corresponds to the solution `x₁ = 2`, `x₂ = 3`, and `x₃ = -1`.

## ⚙️ Code Explanation

- `main()`: The entry point of the program. It handles user input for the size of the system, calls the solver function, and prints the final solution.
- `inputMatrix()`: Dynamically allocates memory for the `n x (n+1)` augmented matrix and prompts the user to fill it with coefficients.
- `gausseliminationMethod()`: The core function where the algorithm is implemented. It performs forward elimination to create an upper triangular matrix and then back substitution to find the solution vector, which it returns.


## ⚠️ Important Limitations and Caveats

This implementation demonstrates the basic algorithm but has significant limitations that make it unsuitable for general-purpose or production use.

#### 1. Naive Implementation (No Pivoting)

The code uses the diagonal element `matrix[i][i]` as the pivot in every step without any checks. This is problematic for two reasons:

- **Division by Zero**: If a pivot element `matrix[i][i]` is zero, the program will crash due to a division-by-zero error in the line `ratio = matrix[j][i] / matrix[i][i];`.
- **Numerical Instability**: If a pivot element is very small (but not zero), it can lead to large floating-point errors, making the final solution highly inaccurate.

A robust implementation would use **partial pivoting**, which involves swapping rows to ensure the largest possible pivot element is used in each step.

#### 2. Memory Leaks

The program allocates memory using `malloc` in both `inputMatrix()` and `gausseliminationMethod()` but **never frees this memory**. In a larger application or loop, this would lead to a significant memory leak. The memory returned by these functions should be released using `free()` in the `main` function when it is no longer needed.

