#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct etu {
int age ;
char name [20];
}etu ;
int main(){
etu etus [3] ;
etus[0].age =10;
etus[0].name == "salim";
etus[1].age =15;
etus[1].name == "ssalim";
etus[2].age =20;
etus[2].name == "sssalim";
FILE*file ;
file =fopen ("salim01.txt" ,"w");
if (file ==NULL){
printf ("the file dosnt exist \n");
return -1 ;
}
for (int i =0 ;i<=2 ;i++){
fprintf (file ,"this is the ages:: %d\n and this is thier names ::%s\n" ,etus[i].age ,etus[i].name);}
printf ("the file open succ");
fclose (file) ;
return 0 ;
}