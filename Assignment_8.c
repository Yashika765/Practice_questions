#include <stdio.h>
#include <stdbool.h>

int main() {
    float marks[5];
    float total = 0, aggregate;
    bool passedAll = true;
    int i;

    printf("--- Student Result System ---\n");

    
    for (i = 0; i < 5; i++) {
        printf("Enter marks for course %d: ", i + 1);
        scanf("%f", &marks[i]);

        
        if (marks[i] < 40) {
            passedAll = false;
        }
        total += marks[i];
    }

    
    aggregate = (total / 500.0) * 100;

    printf("\n--- Final Result ---\n");
    printf("Aggregate Percentage: %.2f%%\n", aggregate);

    if (!passedAll) {
        printf("Result: FAILED (Must score at least 40 in every course)\n");
    } else {
        printf("Result: PASS\n");
        printf("Grade: ");

        
        if (aggregate >= 75) {
            printf("Distinction\n");
        } else if (aggregate >= 60) {
            printf("1st Division\n");
        } else if (aggregate >= 50) {
            printf("2nd Division\n");
        } else if (aggregate >= 40) {
            printf("3rd Division\n");
        } else {
            printf("Pass (No Division)\n");
        }
    }

    return 0;
}