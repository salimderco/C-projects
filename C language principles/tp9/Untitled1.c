#include <stdio.h>
#include <stdlib.h>
int sal (int n ){
int i,s,t ;
i=1;
t=1;
s=n;
while (n/i!=0){
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
}

