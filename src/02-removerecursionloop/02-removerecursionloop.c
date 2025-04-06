/**
 * @file 02-removerecursionloop.c
 * @brief A program to calculate the factorial of a number using an iterative approach.
 *
 * This program demonstrates how to calculate the factorial of a number using a loop instead of recursion.
 * It handles edge cases such as negative numbers by displaying an appropriate message. This approach
 * avoids the potential stack overflow issues associated with recursion.
 *
 * @author [Your Name]
 * @date [Date]
 */

 /**
    * @function factorial
    * @brief Calculates the factorial of a given non-negative integer.
    *
    * This function computes the factorial of a number using an iterative approach.
    * It multiplies numbers from the given integer down to 1. This method is efficient
    * and avoids the overhead of recursive function calls.
    *
    * @param n The integer whose factorial is to be calculated. Must be non-negative.
    * @return The factorial of the input integer. Returns 1 if n is 0 or 1.
    */

 /**
    * @function main
    * @brief Entry point of the program.
    *
    * This function prompts the user to enter an integer, validates the input,
    * and calculates the factorial using the `factorial` function. It displays
    * the result or an error message for invalid input. The program ensures that
    * the factorial calculation is performed iteratively to avoid recursion-related issues.
    *
    * @return Returns 0 upon successful execution.
    */
#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    int product = 1;  // Start with a product of 1
    for (int i = n; i > 1; i--) {   // Continue until i is 1
        product *= i;               // Multiply product by i
    }
    return product;   // Return the final product
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", number, factorial(number));
    }

    return 0;
}