#include <stdio.h>

int main() 
{
    int num, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) 
{
        printf("-");
        num = -num;
    }

    printf("Reversed digits: ");

    if (num == 0) 
{
        printf("0");
    }

    while (num > 0) 
{
        digit = num % 10;      
        printf("%d", digit);   
        num = num / 10;        
    }

    printf("\n");
    return 0;
}