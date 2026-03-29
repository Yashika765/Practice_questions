#include <stdio.h>

int main() {
    float basicPay, hra, ta, grossSalary, profTax, netSalary;

    printf("Enter the Basic Pay of the employee: ");
    scanf("%f", &basicPay);

    hra = 0.10 * basicPay;

    ta = 0.05 * basicPay;

    grossSalary = basicPay + hra + ta;

    profTax = 0.02 * grossSalary;
    
    netSalary = grossSalary - profTax;

    
    printf("\n--- Salary Statement ---\n");
    printf("Basic Pay:         %.2f\n", basicPay);
    printf("HRA (10%%):         %.2f\n", hra);
    printf("TA (5%%):           %.2f\n", ta);
    printf("--------------------------\n");
    printf("Gross Salary:      %.2f\n", grossSalary);
    printf("Prof. Tax (2%%):    %.2f\n", profTax);
    printf("--------------------------\n");
    printf("NET SALARY:        %.2f\n", netSalary);

    return 0;
}