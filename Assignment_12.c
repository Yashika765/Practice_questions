#include <stdio.h>


int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int findSmallestCommonDivisor(int a, int b) {
    int min = (a < b) ? a : b;
    for (int i = 2; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
    return 1; 
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    
    int a = (num1 < 0) ? -num1 : num1;
    int b = (num2 < 0) ? -num2 : num2;

    if (a == 0 || b == 0) {
        printf("Divisors are not defined for zero.\n");
    } else {
        int gcd = findGCD(a, b);
        int scd = findSmallestCommonDivisor(a, b);

        printf("\n--- Results ---\n");
        printf("Greatest Common Divisor (GCD): %d\n", gcd);
        printf("Smallest Common Divisor (SCD): %d\n", scd);
        
        
        if (scd == 1) {
            printf("(Note: No common divisor greater than 1 was found)\n");
        }
    }

    return 0;
}