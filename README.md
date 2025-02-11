
# Numerical Methods

This repository contains implementations of various **Numerical Methods** used for solving mathematical problems such as finding roots, solving systems of equations, numerical integration, and differentiation. These methods are fundamental tools in engineering, physics, computer science, and applied mathematics.

---

## Table of Contents

1. [Introduction](#introduction)
2. [Methods Implemented](#methods-implemented)
3. [How to Run](#how-to-run)
4. [Applications](#applications)
5. [Advantages & Limitations](#advantages--limitations)
6. [Contributing](#contributing)
7. [License](#license)

---

## Introduction

**Numerical Methods** are techniques used to approximate solutions for mathematical problems that cannot be solved analytically. They are widely used in various scientific and engineering fields to solve complex problems where exact solutions are impractical or impossible.

This repository provides code implementations for popular numerical algorithms, including **root-finding techniques**, **linear system solvers**, and **numerical integration** methods.

---

## Methods Implemented

### 1. **Root-Finding Methods**
- **Bisection Method**  
  A simple bracketing method that narrows down intervals to find roots.
  
- **Newton-Raphson Method**  
  A fast iterative method that uses derivatives to approximate roots.

- **Secant Method**  
  A derivative-free alternative to Newton-Raphson, using secant lines for approximation.

- **False Position (Regula Falsi) Method**  
  Combines bracketing with linear interpolation for root-finding.

---

### 2. **Solving Systems of Linear Equations**
- **Gauss Elimination Method**  
  Direct method for solving linear systems by converting matrices to upper triangular form.

- **Gauss-Seidel Method**  
  An iterative technique for solving linear systems, especially useful for sparse matrices.

- **LU Decomposition**  
  Factorizes a matrix into lower and upper triangular matrices for easier computation.

---

### 3. **Numerical Integration and Differentiation**
- **Trapezoidal Rule**  
  Approximates definite integrals by dividing the area under a curve into trapezoids.

- **Simpson's Rule**  
  Uses parabolic arcs instead of line segments to approximate integrals for better accuracy.

- **Finite Difference Method**  
  Estimates derivatives using discretized approximations.

---

### 4. **Interpolation and Extrapolation**
- **Lagrange Interpolation**  
  Constructs a polynomial that passes through a given set of points.

- **Newton's Divided Difference Method**  
  Builds interpolating polynomials using recursive division.

---

### 5. **Numerical Optimization**
- **Gradient Descent Method**  
  An iterative optimization algorithm used for finding the minimum of functions.

---

## How to Run

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/your-username/numerical-methods.git
   cd numerical-methods
   ```

2. **Compile the Code (for C implementations):**
   ```bash
   gcc bisection.c -o bisection -lm
   ./bisection
   ```

3. **Run Python Implementations (if applicable):**
   ```bash
   python newton_raphson.py
   ```

4. **Expected Output:**
   Each method outputs the computed solution, such as approximated roots or integral values.

---

## Applications

- **Engineering:** Structural analysis, fluid dynamics, electrical circuits.
- **Physics:** Solving differential equations, modeling dynamic systems.
- **Computer Science:** Machine learning optimization, computational geometry.
- **Finance:** Risk modeling, option pricing, numerical simulations.
- **Statistics:** Data fitting, regression analysis, interpolation.

---

## Advantages & Limitations

### **Advantages:**
- Solves complex mathematical problems that are difficult or impossible to solve analytically.
- Provides approximate solutions with controllable accuracy.
- Applicable to real-world problems across multiple disciplines.

### **Limitations:**
- Some methods may converge slowly or fail to converge.
- Results are approximate and depend on tolerance levels and initial guesses.
- Computationally intensive for large problems.

---

## Contributing

Contributions are welcome! If you'd like to add more numerical methods or improve existing ones, feel free to fork this repository, make changes, and submit a pull request.

1. Fork the repo.
2. Create a new branch (`git checkout -b feature-branch`).
3. Commit your changes (`git commit -m 'Add new method'`).
4. Push to the branch (`git push origin feature-branch`).
5. Open a pull request.

---

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use, modify, and distribute as needed.