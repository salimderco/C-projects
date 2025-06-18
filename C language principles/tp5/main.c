/*#include <stdio.h>
#include <stdlib.h>
int sal (int n ){
int i,s,t;
i=10;
t=1;
s=n;
while (s/i!=0){
    n=s/i;
  i=i*10;
    t=t+1;
}
return t;
}

int main()
{

   int n;
   printf ("enter the num ::");
   scanf ("%d" ,&n);

    printf ("the result is :: %d" ,sal(n));



    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void cal (int a ,int b,int c){
float d;
float x1,x2;
d=pow(b,2)-(4*(a*c));

if (d<0){
    printf ("the equation dont have a solotion");
}
else{
x1=(-b+sqrt(d)) / 2*a ;
x2=(-b-sqrt(d)) / 2*a;
printf ("the sulotion is x1 ::%.2f\n",x1);
printf ("and the second is x1 ::%.2f\n",x2);
}}






int main (){

float a,b,c ;
printf ("give the first coifisiants ::");
scanf ("%f",&a);
printf ("give the second coifisiants ::");
scanf ("%f",&b);
printf ("give the third coifisiants ::");
scanf ("%f",&c);
cal (a,b,c);
return 0;}

