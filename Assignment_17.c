#include <stdio.h>
#include <math.h>

int main() {
    int i, n;
    float x, degree, term, sum;

    printf("--- Sine Series Calculator ---\n");
    printf("Enter the angle in degrees: ");
    scanf("%f", &degree);
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Convert degrees to radians
    x = degree * (3.14159 / 180.0);

    term = x;  
    sum = x;   

    for (i = 1; i < n; i++) {
        term = -term * x * x / (2 * i * (2 * i + 1));
        sum += term;
    }

    printf("\nSum of sine series up to %d terms: %.4f\n", n, sum);
    printf("Actual sin(%.2f) using library function: %.4f\n", degree, sin(x));

    return 0;
}