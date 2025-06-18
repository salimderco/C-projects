#include <stdio.h>
int main (){
int tab [6];
for (int i =0 ;i<6;i++){
printf ("enter the %d ele of the table" ,i+1) ;
scanf ("%d" ,&tab[i]) ;
}
int t=6;

int temp =0 ;
for (int i=0 ; i<6/2;i++){
--t ;
temp =tab[i] ;
tab[i]=tab [t-i];
tab[t-i] =temp ;

}


for (int i =0 ;i<6 ;i++){
printf ("this the %d ele of the table::%d\n" ,i+1,tab [i]) ;

}
return 0;}