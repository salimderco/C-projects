#include <stdio.h>
void mul (int x){
    int t [10];
for (int i =0 ;i<=10 ;i++){
 t[i] = x*i ;
printf  ("le multip de x fois %d est :: %d\n",i,t[i]);
}
}
int main (){
int x ;
printf ("give the num ::");
scanf ("%d",&x);
mul (x);
    return 0;
}
