#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

int tab [6];
tab[0] =10;
tab[1] =5;
tab[2] =2;
tab[3] =3;
tab[4] =11;
tab[5] =1;

for (int i=0 ;i<=5;i++){
for (int t=i+1;t<=5;t++){
if (tab[t]<tab[i]){
int temp ;
temp =tab[i] ;
tab[i] =tab[t];
tab[t] =temp ;
}
}
}
for (int i=0 ;i<=5;i++){
printf ("%d\n" , tab[i]);}
return 0;}
