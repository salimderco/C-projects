#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[] = "salim7.txt"; 
  int t=0;
char ch;


    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s.\n", filename);
        return 1;
    }

while ((ch=fgetc(file))!= EOF)
{
if (ch == '\n'){
t++;
}}
    
    printf("The num of line is :: %d \n",t);

    fclose(file);

    return 0;
}
