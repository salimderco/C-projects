#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct block {
int data ;
struct block *next  ;

}block ;
block * createblock (int data){
block *newblock =(block*)malloc(sizeof(block)) ;
newblock ->data =data ;
return newblock ;
}
void printblock (block *head ){
int i ;
i=1;

while (head != NULL){
printf ("block data N%d :: %d\n",i ,head->data) ;
head =head ->next ;
i++;

}
}
int main (){


block *block1 =createblock (10) ;
block *block2 =createblock (20) ;
block *block3 =createblock (30) ;
block1 ->next =block2 ;
block2 ->next =block3;
block3 ->next =NULL ;
printblock (block1) ;

return 0 ;}