#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
   FILE *filename ;
const char *key  ;
char n =12 ;
key = &n;
char line [10];
filename =fopen ("filename01.txt" ,"w" );
if (filename ==NULL){
printf ("the coudnt open .\n");
return 1;
}
    while (fgets(line ,sizeof(line) ,filename) != NULL) {

if (strstr(line ,key)){
printf ("exict ", line );
}
else 
printf ("eurur");
}
   
  fclose(filename);
 
    return 0;
}