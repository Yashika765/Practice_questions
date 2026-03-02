// Write a C program to accept student details and display their result using an array of structures.
#include <stdio.h>
#include <string.h>

// Define a structure for student details
struct Student {
    int roll_no;
    char name[50];
    float marks;
    char grade;
};

int main() {
    int n, i;
    // Declare an array of structures to store student records. We use a maximum size of 100 here.
    struct Student students[100];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input details for each student using a loop
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name); // Use %s for string input, it stops at whitespace
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks (out of 100): ");
        scanf("%f", &students[i].marks);

        // Calculate the grade based on marks
        if (students[i].marks >= 90) {
            students[i].grade = 'A';
        } else if (students[i].marks >= 80) {
            students[i].grade = 'B';
        } else if (students[i].marks >= 70) {
            students[i].grade = 'C';
        } else if (students[i].marks >= 60) {
            students[i].grade = 'D';
        } else {
            students[i].grade = 'F';
        }
    }

    // Display the results for all students using another loop
    printf("\n\n*** Student Results ***\n");
    printf("%-10s %-20s %-10s %-10s\n", "Roll No", "Name", "Marks", "Grade");
    printf("--------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f %-10c\n",
               students[i].roll_no,
               students[i].name,
               students[i].marks,
               students[i].grade);
    }

    return 0;
}
