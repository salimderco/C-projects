/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
 FILE * file ;
char filename [20] ;
char yourn [10] ;
int age ;
printf ("iwante you to give your name :: \n ") ;
scanf ("%s" ,&yourn) ;
printf ("iwante youe to give your age also  :: \n ") ;
scanf ("%d" ,&age ) ;
file = fopen ("filename.txt" ,"w");
if (file  == NULL) {
printf ("thre is a propleme");
exit (1) ;}
else {
fprintf (file  ,"your name is  :: %s and your age is :: %d " ,yourn ,age );
}
fclose (file);
return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct  {
int sd;
char name [10 ] ;
}s;
int main() {
 FILE * file ;
char filename [20] ;
char yourn [10] ;
int age ;
s salim = {10 ,"derrajd"};
printf ("iwante you to give your name :: \n ") ;
scanf ("%s" ,&yourn) ;
printf ("iwante youe to give your age also  :: \n ") ;
scanf ("%d" ,&age ) ;
file = fopen ("filename.txt" ,"wb");
if (file  == NULL) {
printf ("thre is a propleme");
exit (1) ;}
else {
fprintf (file  ,"your name is  :: %s and your age is :: %d " ,yourn ,age );
fwrite (&salim ,sizeof(s) ,1 ,file );
}
fclose (file);
return 0;
}*/
