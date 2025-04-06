/**
 * @file 03-removerecursionstack.c
 * @brief Program to calculate the factorial of a number using an iterative approach with an explicit stack.
 *
 * This program demonstrates how to calculate the factorial of a number without using recursion.
 * Instead, it uses an explicit stack to simulate the recursive behavior, avoiding the use of the
 * function call stack. This approach is useful for avoiding stack overflow in cases of large input.
 *
 * @author [Your Name]
 * @date [Date]
 */

#include <stdio.h>

/**
 * @brief Calculates the factorial of a given number using an explicit stack.
 *
 * This function uses an iterative approach to calculate the factorial of a number.
 * It employs an explicit stack to simulate the recursive process of calculating the factorial.
 * The explicit stack helps in managing the intermediate states without relying on the function call stack.
 *
 * @param n The number for which the factorial is to be calculated. Must be a non-negative integer.
 * @return The factorial of the given number. Returns 1 if the input is 0.
 */
int factorial(int n);

/**
 * @brief Entry point of the program.
 *
 * This function prompts the user to input an integer, validates the input, and calculates
 * the factorial using the `factorial` function. It handles negative input by displaying
 * an appropriate message. The program ensures that the input is a non-negative integer
 * before proceeding with the calculation.
 *
 * @return Returns 0 upon successful execution.
 */
int main();

// Function to calculate factorial of a number
int factorial(int n) {
    int result = 1;
    int stack[n + 1];
    int top = -1;

    while (n > 0 || top != -1) {
        if (n > 0) {
            stack[++top] = n;
            n--;
        } else {
            result *= stack[top--];
        }
    }

    return result;
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