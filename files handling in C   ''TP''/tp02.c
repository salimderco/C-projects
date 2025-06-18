#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main() {
 FILE * file01 ;
int ch=0 ;
char cha ;
int t ;
file01 = fopen ("filesalim.txt" ,"w+");
if (file01  == NULL) {
printf ("thre is a propleme");
exit (1) ;}
printf ("enter the char that you wanna now if it exict in the file   ::");
scanf ("%c" ,&cha);
fputs ("salim" , file01 ) ;
ch=fgetc (file01);
while (ch != EOF){
if (ch == cha ){
t++;
}
ch = fgetc (file01) ;}
if (cha =! 0){
printf ("the carrecter that you give exicst and it repeat %d time"  ,t);
}
else 
printf ("your carrecter dont exict ");




fclose (file01);
return 0;
}