#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main() {
 FILE * file ;
int ch ;
file = fopen ("filename.txt" ,"r+");
if (file  == NULL) {
printf ("thre is a propleme");
exit (1) ;}
ch=fgetc (file);
while (ch != EOF){
printf ("%c" ,ch ) ;
ch = fgetc (file) ;
}
fclose (file);
return 0;
}
