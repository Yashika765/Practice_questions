#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str1[100], str2[100], temp[100];

    printf("Enter a string: ");
    
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; 

    // Calculate length
    int len = strlen(str1);
    printf("\n1. Length of string: %d\n", len);

    // String reversal
    strcpy(temp, str1); 
    printf("2. Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", temp[i]);
    }
    printf("\n");

    // Equality check
    printf("3. Enter another string to check equality: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    if (strcmp(str1, str2) == 0) {
        printf("   Strings are equal.\n");
    } else {
        printf("   Strings are not equal.\n");
    }

    // Check Palindrome
    bool isPalindrome = true;
    for (int i = 0; i < len / 2; i++) {
        if (str1[i] != str1[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    printf("4. Palindrome check: %s\n", isPalindrome ? "Yes, it is a palindrome." : "No, it is not.");

    // Check Substring
    printf("5. Enter a substring to search for: ");
    char sub[50];
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = 0;

    char *ptr = strstr(str1, sub);
    if (ptr != NULL) {
        printf("   '%s' found in '%s' at position %ld.\n", sub, str1, ptr - str1);
    } else {
        printf("   '%s' not found.\n");
    }

    return 0;
}