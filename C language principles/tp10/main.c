#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,s;
    printf ("enter the num ::\n");
    scanf ("%d"  ,&a);



    for (int i=1 ;i<= a ;i++){
        if (a%i ==0){
            s=s+1;
        }




    }
     if (s ==2){
            printf ("the num is primary");}
    return 0;
}
