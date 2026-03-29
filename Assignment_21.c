#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourcePath[100], destPath[100];
    char ch;

    // Get file names from user
    printf("Enter source file name: ");
    scanf("%s", sourcePath);
    printf("Enter destination file name: ");
    scanf("%s", destPath);

    // Open source file in read mode ("r")
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file %s\n", sourcePath);
        exit(1);
    }

    // Open destination file in write mode ("w")
    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        printf("Error: Cannot open destination file %s\n", destPath);
        fclose(sourceFile);
        exit(1);
    }

    // Read character by character and write to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("\nFile copied successfully from %s to %s.\n", sourcePath, destPath);

    // Close both files to release memory
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}