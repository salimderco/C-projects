#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2, *outputFile;
    char ch;

    // Open the first file (salim5.txt) in read mode
    file1 = fopen("salim5.txt", "r");
    if (file1 == NULL) {
        printf("Could not open salim5.txt\n");
        return 1;
    }

    // Open the second file (salim6.txt) in read mode
    file2 = fopen("salim6.txt", "r");
    if (file2 == NULL) {
        printf("Could not open salim6.txt\n");
        fclose(file1); // Close the first file if second file fails to open
        return 1;
    }

    // Open the output file (output.txt) in write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Could not create output.txt\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    // Read from salim5.txt and write to output.txt
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, outputFile);
    }

    // Read from salim6.txt and write to output.txt
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, outputFile);
    }

    // Close all files
    fclose(file1);
    fclose(file2);
    fclose(outputFile);

    printf("Files have been concatenated successfully into output.txt\n");

    return 0;
}
