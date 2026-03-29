#include <stdio.h>
#include <math.h> // Required for pow()

// Function to calculate factorial
long long factorial(int n) {
    if (n < 0) return 0;
    long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

int main() {
    int choice;
    double num1, num2, result;

    printf("--- Simple Calculator ---\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        case 5:
            printf("Enter base (x) and exponent (y): ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2lf\n", pow(num1, num2));
            break;
        case 6:
            printf("Enter an integer: ");
            int n;
            scanf("%d", &n);
            if (n < 0)
                printf("Error: Factorial of negative number doesn't exist.\n");
            else
                printf("Result: %lld\n", factorial(n));
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}