# Recursion Example: Factorial Calculation

This project demonstrates the use of recursion in C to calculate the factorial of a given integer.

## Features

- Prompts the user to input an integer.
- Calculates the factorial of the input using a recursive function.
- Handles negative input by displaying an appropriate message.

## How to Build

To build the program, use the provided `CMakeLists.txt` file:

```bash
mkdir build
cd build
cmake ..
make
```

## How to Run

After building, run the executable:

```bash
./01-recursion
```

## Example Usage

### Input:
```
Enter an integer: 5
```

### Output:
```
Factorial of 5 is 120
```

### Input:
```
Enter an integer: -3
```

### Output:
```
Factorial is not defined for negative numbers.
```

## Notes

- The factorial of 0 is defined as 1.
- The program uses recursion to calculate the factorial, which is a common technique in programming for solving problems that can be broken down into smaller subproblems.
