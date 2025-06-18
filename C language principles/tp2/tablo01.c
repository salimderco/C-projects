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
int ind;
entrer (tab);

for (int u=0 ;u<=4 ;u++){
if (tab[u] >= tab[u+1]){
ind = tab[u];
tab[u]=tab[u+1];
tab[u+1] =ind ;
}}
affiche (tab);
return 0;
}