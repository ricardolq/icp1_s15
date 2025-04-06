/**
 * @file 01-recursion.c
 * @brief A program to calculate the factorial of a given integer using recursion.
 *
 * This program prompts the user to input an integer and calculates its factorial
 * using a recursive function. If the input is a negative number, the program
 * informs the user that the factorial is not defined for negative numbers.
 *
 * @author [Your Name]
 * @date [Date]
 */

#include <stdio.h>

/**
 * @brief Calculates the factorial of a given non-negative integer.
 *
 * This function uses recursion to compute the factorial of a number.
 * The factorial of 0 is defined as 1.
 *
 * @param n The integer for which the factorial is to be calculated.
 *          Must be a non-negative integer.
 * @return The factorial of the input integer.
 */
int factorial(int n);

/**
 * @brief The main function of the program.
 *
 * This function prompts the user to input an integer, checks if the input
 * is non-negative, and calculates the factorial using the `factorial` function.
 * If the input is negative, it displays an appropriate message.
 *
 * @return Returns 0 upon successful execution.
 */
int main();

// Function to calculate factorial of a number
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
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