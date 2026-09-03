#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an expression (e.g., 5 + 3): ");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator. Use +, -, *, or /.\n");
    }

    return 0;
}