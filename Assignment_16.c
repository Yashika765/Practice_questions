#include <stdio.h>

int main() {
    int n, i, eCount = 0, oCount = 0;
    int a[100], even[100], odd[100];

    
    printf("Enter the number of integers (N): ");
    scanf("%d", &n);

    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            even[eCount] = a[i]; 
            eCount++;
        } else {
            odd[oCount] = a[i];  
            oCount++;
        }
    }

    
    printf("\n--- Partitioned Sublists ---\n");

    printf("Even Numbers (%d): ", eCount);
    if (eCount == 0) printf("None");
    for (i = 0; i < eCount; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd Numbers (%d): ", oCount);
    if (oCount == 0) printf("None");
    for (i = 0; i < oCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}