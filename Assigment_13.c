#include <stdio.h>
int main() 
{
    int num, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) 
    {
        printf("Reversed number: 0");
    } 
    else 
    {
        printf("Reversed digits: ");
    }
    while (num != 0) 
    {
        remainder = num % 10;    
        printf("%d", remainder); 
        num = num / 10;          
    }
    return 0;
}
