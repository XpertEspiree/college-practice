#include <stdio.h>

// Function declarations
float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);

int main() {
    int choice;
    float num1, num2, result;

    printf("===== MENU BASED CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
    }

    switch (choice) {
        case 1:
            result = addition(num1, num2);
            printf("Result = %.2f\n", result);
            break;

        case 2:
            result = subtraction(num1, num2);
            printf("Result = %.2f\n", result);
            break;

        case 3:
            result = multiplication(num1, num2);
            printf("Result = %.2f\n", result);
            break;

        case 4:
            if (num2 != 0) {
                result = division(num1, num2);
                printf("Result = %.2f\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

// Function definitions
float addition(float a, float b) {
    return a + b;
}

float subtraction(float a, float b) {
    return a - b;
}

float multiplication(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    return a / b;
}

