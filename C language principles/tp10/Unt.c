/*#include <stdio.h>
#include <stdlib.h>

int main()
{

   int a [10];

   for (int i=0 ;i<=10 ;i++){
    printf ("enter the 1st ele  T [%d] ::" , i);
    scanf ("%d" ,& a[i]);



   }

   for (int t=1 ;t<=10 ;t++){
   if (a[0] <a[t]){
    a[0]=a[t];

    }
    if (a[1]<a[t] )
    a[1]=a[t];
    }
    printf ("%d\n",a[0]);
    printf ("%d",a[1]);



    return 0 ;}


#include <stdio.h>
#include <stdlib.h>

int main()
{
   int  t[20];
int a ;
      for (int i=0 ;i<=10 ;i++){
    printf ("enter the 1st ele  T [%d] ::" , i);
    scanf ("%d" ,& t[i]);

   }

   printf ("enter the num of ins  ::");
   scanf ("%d",&a);

   for (int s=10 ;s>=a ;s--){

   t[s+1]= t[s];
   if (s==a){
    t[s]=10;
   }

   }


      for (int r=0 ;r<=11 ;r++){
    printf ("%d " , t[r]);


   }



    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int  t[20];
int a ;
      for (int i=0 ;i<=10 ;i++){
    printf ("enter the 1st ele  T [%d] ::" , i);
    scanf ("%d" ,& t[i]);

   }
    printf ("enter the num of ins  ::");
   scanf ("%d",&a);
   for (int s=0 ;s<=10 ;s++){
    if (s==a){
        t[s]=0;
        for (int e=a ;e<=10 ;e++){
        t[e]=t[e+1];
        }
    }


   }
   for (int z=0 ;z<=9;z++){
    printf ("%d\n",t[z]);
   }




   return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int  t[20];
int a,m ;
      for (int i=0 ;i<=10 ;i++){
    printf ("enter the 1st ele  T [%d] ::" , i);
    scanf ("%d" ,& t[i]);

      }
      for (int s=0 ;s<=10;s++){
        for (int x=10 ;x<=10;x++){
                if (t[s]=t[x]){
             m++  ;

      }

        }


      }


printf ("%d" ,m);



return 0;}*/



#include <stdio.h>
#include <stdlib.h>


typedef struct box {
  int data;
  struct box *next ;
}box;

box* ajouter (box *deput ,int elm){
box *b;
b=(box *)malloc (sizeof (box));
b->data=elm;
b->next =debut ;
debut =b;
return debut;
}


void afficherlist (box*debut){
box *temp ;
temp =debut;
if (debut==NULL){
printf ("la list il est vide");
}
else
{
 while (temp!=NULL){
    printf ("%d::",temp->data);
    temp=temp->next;
 }
}
}
int main (){
box *l1= NULL;
int n ,i,nbr;
printf("donner les num des ele");
scanf ("%d",&nbr);
for (i=0 ;i<nbr;i++){
    scanf ("%d" ,&n);
   l1= ajouter (l1 ,n);
}
afficherlist(l1);

    return 0;}
