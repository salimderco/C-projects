#include <stdio.h>
int echange (int a ,int b ){
int temp=0 ;
temp = a ;
a =b;
b =temp ;
return b;
}
int main (){
int a =1 ;
int b=2 ;
printf ("this is th current a and b :: %d %d " ,a ,b);
 b = echange (a,b) ;
printf ("%d %d " ,a ,b);

return 0;
}




