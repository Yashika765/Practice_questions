#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    char str1[100], str2[100], temp[100];
    int choice;

    while (1) {
        printf("\n--- String Operations Menu ---");
        printf("\n1. Length of String (strlen)");
        printf("\n2. Copy String (strcpy)");
        printf("\n3. Concatenate Strings (strcat)");
        printf("\n4. Compare Two Strings (strcmp)");
        printf("\n5. Find Substring (strstr)");
        printf("\n6. Reverse String (Manual/Logic)");
        printf("\n7. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
         

        if (choice == 7) {
            printf("Exiting program...\n");
            break;
        }

        printf("Enter the main string: ");
        fgets(str1, sizeof(str1), stdin);
        str1[strcspn(str1, "\n")] = 0; 

        switch (choice) {
            case 1:
                printf("Length: %zu\n", strlen(str1));
                break;

            case 2:
                strcpy(temp, str1);
                printf("Original: %s | Copied to Temp: %s\n", str1, temp);
                break;

            case 3:
                printf("Enter string to append: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = 0;
                strcat(str1, str2);
                printf("Result after Concatenation: %s\n", str1);
                break;

            case 4:
                printf("Enter second string to compare: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = 0;
                if (strcmp(str1, str2) == 0)
                    printf("Strings are identical.\n");
                else
                    printf("Strings are different.\n");
                break;

            case 5:
                printf("Enter substring to search: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = 0;
                if (strstr(str1, str2))
                    printf("'%s' found in '%s'\n", str2, str1);
                else
                    printf("Not found.\n");
                break;

            case 6:
                printf("Reversed: ");
                for (int i = strlen(str1) - 1; i >= 0; i--) {
                    putchar(str1[i]);
                }
                printf("\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}