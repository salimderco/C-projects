#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
int anner ;
char nom [20];

FILE *salim;
salim=fopen("salim5","r");
if (salim==NULL){
printf ("coudn't open the file");
exit(1);
}
printf ("enter your name ");
gets (nom);
printf ("enter your age ");
scanf ("%d" ,&anner);
fprintf (salim,"\nyour name is:: %s and your age is:: %d",nom,anner );


fputc ('s' ,salim);

fputc ('a' ,salim);

fputc ('l' ,salim);

fputc ('i' ,salim);

fputc ('m' ,salim);

fputs ("salim is a man",salim);
fclose (salim);
return 0;
}