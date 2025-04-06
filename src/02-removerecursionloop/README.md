# Iterative Example: Factorial Calculation

This project demonstrates the use of an iterative approach in C to calculate the factorial of a given integer.

## Features

- Prompts the user to input an integer.
- Calculates the factorial of the input using a loop instead of recursion.
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
./02-removerecursionloop
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
- This program uses an iterative approach to calculate the factorial, which avoids the potential stack overflow issues associated with recursion.
