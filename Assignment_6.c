#include <stdio.h>

// Recursive Function
long long factorialRecursive(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorialRecursive(n - 1);
}

// Iterative Function (Without Recursion)
long long factorialIterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        printf("\n--- Results ---\n");
        printf("With Recursion:    %d! = %lld\n", num, factorialRecursive(num));
        printf("Without Recursion: %d! = %lld\n", num, factorialIterative(num));
    }

    return 0;
}