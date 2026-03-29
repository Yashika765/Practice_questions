#include <stdio.h>
#include <math.h>

int main() {
    long long binary, temp;
    int decimal = 0, i = 0, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary; 

    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * pow(2, i);
        binary /= 10;
        i++;
    }

    printf("\nBinary Number: %lld", temp);
    printf("\nDecimal Equivalent: %d\n", decimal);

    return 0;
}