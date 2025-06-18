#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void entrer (int tab[5]){
for (int i=0;i<=4;i++){
printf ("enter the %d element of the table ::\n",i);
scanf ("%d" , & tab[i]);
}}
void affiche (int tab[5]){
for (int t=0;t<=4;t++){
printf (" the new %d element of the table is :: %d\n",t,tab[t]);
}}

int main (){
int tab [5];
entrer (tab);
int min=tab[0];
for (int u=0 ;u<=4 ;u++){
if (tab[0] > tab[u]){
int ind=tab[u] ;
tab[u]=tab[u-1];
tab[0]=ind;
}}
affiche (tab);
return 0;
}