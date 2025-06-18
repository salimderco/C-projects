#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int main (){
FILE *file04;
char t1 [20];
int i=0;
int ch ;
printf ("enter the num of the file :: ");
scanf ("%s" ,&t1);
file04 = fopen (t1 ,"a" );
if (file04 == NULL ){
printf ("eurur");
fclose (file04);
exit (1);}
fputs ("salim \n derradj" ,file04);
while ((ch=fgetc(file04)) != EOF){
    if (ch =='\n'){
        i++;
    }
}
printf ("%d" ,i);
return 0;
}
