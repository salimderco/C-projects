#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>






int main() {
    FILE *file;
    char filename[] = "salim7.txt"; 
    char word;
    char currentWord;
  char *m;
char line [100] ;
   
    printf("Enter the char to search for:  ");
    scanf("%c", word);

   
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s.\n", filename);
        return 1;
    }
fgets(filename)

line =fgets(salim7.txt);

    m = strtok( line ,delim);
    printf("The char '%c' occurred %d times in the file %c.\n", word, m, filename);

    fclose(file);

    return 0;
}
