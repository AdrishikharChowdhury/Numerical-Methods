# Newton's Forward Interpolation in C

This repository contains a C program that implements Newton's Forward Difference Interpolation method. It is a command-line tool designed to find an approximate value of a function `y = f(x)` for a given `x` that lies between a set of known data points.

The key assumption for this method is that the `x` data points are **equally spaced**.

## 🚀 Features

- Calculates interpolated values using Newton's Forward method.
- Dynamically handles any number of data pairs provided by the user.
- Displays the full forward difference table used in the calculation for verification.
- Simple and interactive command-line interface.


## 📝 Mathematical Formula

The Newton's Forward Difference Interpolation formula is:

$$
f(x) = y_0 + u \Delta y_0 + \frac{u(u-1)}{2!} \Delta^2 y_0 + \frac{u(u-1)(u-2)}{3!} \Delta^3 y_0 + \dots
$$

where:

- $u = \frac{x - x_0}{h}$
- $h$ is the constant step size (difference between consecutive $x$-values).
- $x_0$ is the first value in the data set.
- $\Delta y_0, \Delta^2 y_0, \dots$ are the forward differences, which are the top diagonal entries of the difference table.


## 🛠️ How to Compile and Run

#### Prerequisites

You need a C compiler, such as **GCC**, installed on your system.

#### Steps

1. **Save the Code**: Save the provided code into a file named `forward_interpolation.c`.
2. **Compile the Code**: Open your terminal or command prompt, navigate to the directory where you saved the file, and compile it using the following command:

```bash
gcc -o interpolate forward_interpolation.c
```

This will create an executable file named `interpolate`.
3. **Run the Program**: Execute the program from your terminal:

```bash
./interpolate
```

The program will then prompt you to enter your data.

## 🧪 Example Usage

Let's find the value of `y` at `x = 4` given the following data:


| x | y = f(x) |
| :-- | :-- |
| 3 | 150 |
| 5 | 40 |
| 7 | 10 |
| 9 | 5 |

#### Interaction with the Program:

```
Enter the no. of data pairs: 4
Enter the data pairs:
Enter the datatable[0][0]: 3
Enter the datatable[1][0]: 150
Enter the datatable[0][1]: 5
Enter the datatable[1][1]: 40
Enter the datatable[0][2]: 7
Enter the datatable[1][2]: 10
Enter the datatable[0][3]: 9
Enter the datatable[1][3]: 5
Enter the interpolating point: 4
```


#### Output:

The program will first print the forward difference table it generated:

```
150.000000      -110.000000     80.000000       -55.000000
40.000000       -30.000000      25.000000
10.000000       -5.000000
5.000000
The value at the interpolating point 4.000000 is 81.562500
```


## ⚙️ Code Explanation

- `main()`: The main function handles user interaction, gets the number of data points and the interpolating point, calls the other functions, and prints the final result.
- `inputTable()`: This function dynamically allocates a `2 x n` matrix to store the `x` and `y` data pairs entered by the user.
- `newtonForwardInterpolation()`: This is the core function.

1. It creates a forward difference table (`fdtable`). The structure `fdtable[j][i]` stores the value of $\Delta^j y_i$.
2. It then iteratively applies the Newton's Forward formula using the calculated `u` value and the top diagonal of the difference table (`fdtable[i]`).
- `printTable()`: A helper function to display the generated forward difference table for verification.


## ⚠️ Limitations and Potential Improvements

1. **Memory Management**: The current code uses `malloc` to allocate memory for `datatable` and `fdtable` but does **not** `free` it. In a larger application, this would cause memory leaks. The allocated memory should be freed at the end of `main()` and `newtonForwardInterpolation()` respectively.
2. **No Input Validation**: The program assumes valid user input. It doesn't check if `n > 1` or if the interval `h` is zero (which would cause a division-by-zero error).
3. **Requires Equal Spacing**: The algorithm will produce incorrect results if the `x` data points are not equally spaced.
4. **Data Structure**: The `2 x n` matrix for input is functional but less intuitive than a `n x 2` matrix or an array of structs (e.g., `struct Point { double x; double y; };`).
