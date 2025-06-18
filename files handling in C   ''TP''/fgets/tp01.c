#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int main (){
FILE *file ;
char str [20];
file  = fopen ("salim.txt" ,"w" );
if (file == NULL ){
printf ("eurur");
fclose (file);
exit (1);
}
fputs ("salim" ,file);
while (fgets (str ,sizeof (int) ,file) != NULL ){
printf ("%s" ,str);
}

return 0;
}