#include <stdio.h>

// Function to add two numbers using pointers
void add(int *a, int *b, int *result) {
    *result = *a + *b;
}

// Function to subtract two numbers using pointers
void subtract(int *a, int *b, int *result) {
    *result = *a - *b;
}

// Function to multiply two numbers using pointers
void multiply(int *a, int *b, int *result) {
    *result = *a * *b;
}

// Function to divide two numbers using pointers
void divide(int *a, int *b, float *result) {
    if (*b != 0) {
        *result = (float)(*a) / (*b);  // Casting to float for division
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main() {
    int num1, num2;
    int result;
    float divResult;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Addition
    add(&num1, &num2, &result);
    printf("Addition: %d + %d = %d\n", num1, num2, result);

    // Subtraction
    subtract(&num1, &num2, &result);
    printf("Subtraction: %d - %d = %d\n", num1, num2, result);

    // Multiplication
    multiply(&num1, &num2, &result);
    printf("Multiplication: %d * %d = %d\n", num1, num2, result);

    // Division
    divide(&num1, &num2, &divResult);
    if (num2 != 0) {
        printf("Division: %d / %d = %.2f\n", num1, num2, divResult);
    }

    return 0;
}
