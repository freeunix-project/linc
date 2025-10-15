#include <stdio.h>

// Function declarations
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);

int main() {
    char operator;
    float num1, num2, result;

    printf("=== linc Calculator ===\n");
    printf("Enter two numbers and an operator (+, -, *, /):\n");
    printf("Example: 5 + 3\n");
    
    // Get user input
    scanf("%f %c %f", &num1, &operator, &num2);
    
    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            // Handle division by zero
            if (num2 != 0) {
                result = divide(num1, num2);
            } else {
                printf("Error: Cannot divide by zero.\n");
                return 1; // Return an error code
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1; // Return an error code
    }

    printf("Result: %.2f %c %.2f = %.2f\n", num1, operator, num2, result);

    return 0;
}

// Addition function
float add(float num1, float num2) {
    return num1 + num2;
}

// Subtraction function
float subtract(float num1, float num2) {
    return num1 - num2;
}

// Multiplication function
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Division function
float divide(float num1, float num2) {
    return num1 / num2;
}
