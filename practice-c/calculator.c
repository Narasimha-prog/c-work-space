#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

  printf("--- Hi Developer ---");

    printf("--- SIMPLE C CALCULATOR ---\n");
    
    // Step 1: Get the operator
    printf("Enter operator (+, -, *, /): ");
    // Note: The space before %c is CRITICAL to skip the 'Enter' key from previous inputs
    scanf(" %c", &op);

    // Step 2: Get the numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Step 3: Decision Logic
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero is not allowed.\n");
                return 1; // Exit with error code
            }
            break;
        default:
            printf("Error! '%c' is not a valid operator.\n", op);
            return 1;
    }

    // Step 4: Output the result using formatting
    printf("\nRESULT: %.2f %c %.2f = %.2f\n", num1, op, num2, result);

    return 0;
}
