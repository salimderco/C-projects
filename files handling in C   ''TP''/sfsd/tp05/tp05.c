#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    int key, ch;

    printf("Enter the secret key: ");
    scanf("%d", &key);

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("encrypted.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(ch * key, outputFile);
printf ("%d",ch);
    }
    printf("File encrypted successfully.\n");
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}