#include <stdio.h>

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