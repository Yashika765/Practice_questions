#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main() {
    int i, n, lower, upper;

    srand(time(NULL));

    printf("How many random numbers do you want to generate? ");
    scanf("%d", &n);

    printf("Enter the range (lower and upper bound): ");
    scanf("%d %d", &lower, &upper);

    printf("\nGenerated Pseudo-Random Numbers:\n");
    for (i = 0; i < n; i++) {
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d  ", num);
    }

    printf("\n");
    return 0;
}