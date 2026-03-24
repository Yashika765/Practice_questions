#include <stdio.h>
#include <string.h>

// Define the Structure
struct EMPLOYEE {
    char name[50];
    char designation[30];
    char gender;
    char doj[15];
    float salary;
};


void totalEmployees(int count) {
    printf("\n--- Report ---\n");
    printf("Total number of employees: %d\n", count);
}


void countGender(struct EMPLOYEE emp[], int n)
 {
    int male = 0, female = 0;
    for (int i = 0; i < n; i++) {
        if (emp[i].gender == 'M' || emp[i].gender == 'm') male++;
        else if (emp[i].gender == 'F' || emp[i].gender == 'f') female++;
    }
    printf("Count: Male = %d, Female = %d\n", male, female);
}


void highSalary(struct EMPLOYEE emp[], int n)
 {
    printf("\nEmployees with salary > 10,000:\n");
    int found = 0;
    for (int i = 0; i < n; i++) 
{
        if (emp[i].salary > 10000)
 {
            printf("- %s (Salary: %.2f)\n", emp[i].name, emp[i].salary);
            found = 1;
        }
    }
    if (!found) printf("None found.\n");
}

void findAsstManagers(struct EMPLOYEE emp[], int n) 
{
    printf("\nEmployees with designation 'Asst Manager':\n");
    int found = 0;
    for (int i = 0; i < n; i++)
 {
        if (strcasecmp(emp[i].designation, "Asst Manager") == 0) {
            printf("- %s\n", emp[i].name);
            found = 1;
        }
    }
    if (!found) printf("None found.\n");
}

int main() 
{
    int n;
    printf("How many employees do you want to enter? ");
    scanf("%d", &n);

    struct EMPLOYEE emp[n];


    for (int i = 0; i < n; i++)
 {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", emp[i].name); 
        printf("Designation: ");
        scanf(" %[^\n]s", emp[i].designation);
        printf("Gender (M/F): ");
        scanf(" %c", &emp[i].gender);
        printf("Date of Joining (DD/MM/YYYY): ");
        scanf("%s", emp[i].doj);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    totalEmployees(n);
    countGender(emp, n);
    highSalary(emp, n);
    findAsstManagers(emp, n);

    return 0;
}