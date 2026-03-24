#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    long long fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Square root: %.2f\n", sqrt(n));
    printf("Square: %d\n", n * n);
    printf("Cube: %d\n", n * n * n);

    if (n <= 1)
 {
        printf("%d is not a Prime number\n", n);
    } 
else 
{
        for (i = 2; i <= n / 2; i++)
 {
            if (n % i == 0) 
{
                printf("%d is not a Prime number\n", n);
                break;
            }
        }
        if (i > n / 2)
 {
            printf("%d is a Prime number\n", n);
        }
    }


    for (i = 1; i <= n; i++) 
{
        fact *= i;
    }
    printf("Factorial: %lld\n", fact);

    printf("Prime factors: ");
    int temp = n;
    for (i = 2; i <= temp; i++)
 {
        while (temp % i == 0) 
{
            printf("%d ", i);
            temp /= i;
        }
    }
    printf("\n");
    return 0;
}