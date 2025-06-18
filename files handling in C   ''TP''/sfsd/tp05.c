#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct record {
int id  ;
char name [20] ;
int age ;}record ;

int main (){
int i ;
record tab [3] ={
{1 ,"salim" ,20},
{2 ,"derradj" ,19},
{3 ,"amar" ,21}
};
for ( i=0 ;i<=2;i++){
printf ("the %d recode is ::%d\n %s\n %d\n ", i,tab [i].id ,tab [i].name,tab [i].age);
}
return 0;
}
