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