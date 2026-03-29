#include <stdio.h>


struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    
    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        
        printf("Name: ");
        scanf("%s", s[i].name);
        
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

  
    printf("\n--- Displaying Student Records ---\n");
    printf("Roll No\tName\t\tMarks\n");
    printf("----------------------------------\n");
    
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\n", s[i].rollNo, s[i].name, s[i].marks);
    }

    return 0;
}