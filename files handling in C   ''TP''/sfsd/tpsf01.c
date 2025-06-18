#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;

    // Hardcoded file name
    char filename[] = "salim5.txt";

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file was successfully opened
    if (file == NULL) {
        printf("Could not open file %s.\n", filename);
        return 1;
    }

    // Read the file character by character and display it on the screen
    printf("\nContents of %s:\n\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch); // Display the character on the screen
    }

    // Close the file
    fclose(file);

    return 0;
}
