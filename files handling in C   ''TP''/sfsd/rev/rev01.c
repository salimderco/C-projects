#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

FILE*file ;

file =fopen ("salim.txt" ,"a");
if (file ==NULL){
printf ("the file dosnt exist \n");
return -1 ;
}

int age ;
printf ("enter your age::") ;
scanf ("%d" ,&age ) ;
fprintf (file ,"this your age ::%d" ,age); 


while (!feof(file)){
fscanf (file ,"%d" ,&age ) ;
printf ("%d" ,age) ;}

printf ("%d" ,age) ;
/*fputs ("hello world" ,file ) ;
int ch=fgetc (file) ;
while (ch != EOF){
printf ("%d" ,ch );
ch =fgetc (file) ;
}*/


/*while (fgets (str ,5,file) !=NULL){
printf ("%s" ,str) ;}*/


fclose (file) ;
return 0;
}