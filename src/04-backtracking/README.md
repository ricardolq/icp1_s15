# 04-Backtracking: N-Queens Problem

This project implements a solution to the N-Queens problem using a backtracking algorithm. The N-Queens problem involves placing N queens on an N x N chessboard such that no two queens threaten each other.

## Features

- Solves the N-Queens problem for a configurable board size (default: 10x10).
- Uses a recursive backtracking approach to find solutions.
- Prints the solution board if one exists or indicates if no solution is possible.

## Files

- `CMakeLists.txt`: Build configuration for the project.
- `04-backtracking.c`: Implementation of the N-Queens solution.

## How to Build and Run

1. Use CMake to configure and build the project:
   ```bash
   cmake .
   make
   ```
2. Run the executable:
   ```bash
   ./04-backtracking
   ```
