#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_etu 0
#define pass 1
#define del 2
struct student {
char names[30];
int id ;
float average;
float qunt ;
float price ;

};

typedef struct student stud ;

    void add_a_new_items (stud stu[30] ){
for (int i=0 ;i<=max_etu;i++){
    printf ("enter the name of the %d items please ::\n" ,i);
  scanf ("%s",&stu[i].names);
printf ("enter the id of the %d items please ::\n" ,i);
  scanf ("%d",&stu[i].id);
  printf ("enter the price of the %d items please ::\n" ,i);
  scanf ("%f",&stu[i].price);
  printf ("enter the quntite of the %d items please ::\n" ,i);
  scanf ("%f",&stu[i].qunt);

}}
    void update (stud stu [30],int k,int l){
  if   (k==pass){
   for (int i=l ;i<=l;i++){
     printf ("please give the update name of the %d items ::\n" ,i);
  scanf ("%s",&stu[i].names);
printf (" please give the update id of the %d items ::\n" ,i);
  scanf ("%d",&stu[i].id);
  printf ("please give the update price of the %d items  ::\n" ,i);
  scanf ("%f",&stu[i].price);
  printf ("please give the update quntite of the %d items ::\n" ,i);
  scanf ("%f",&stu[i].qunt);
}}}

void delete_items (stud stu[30] ,int j,int t){
    if (t==del){
for (int i=j;i<=j;i++){
   strcpy( stu [i].names ,"None");
   stu[i].id =0;
   stu[i].price=0;
    stu[i].qunt=0;

}
}
}




int main()
{

stud stu [30];
int s,u,i,m;
add_a_new_items(stu);
 update( stu, s, u);
 delete_items ( stu, i, m);
printf ("sir  .if you wanna update your data pleas enter the number 1 ::\n");
scanf("%d" ,&s);
printf ("sir . please enter the number of the items that you wanna update it ::\n" );
scanf("%d" ,&u);
printf ("sir  .if you wanna delete your data pleas enter the number 2 ::\n");
scanf("%d" ,&i);
printf ("sir . please enter the number of the items that you wanna delete it ::\n" );
scanf("%d" ,&m);

printf ("%s" ,stu[0].names);
printf ("%s" ,stu[0].id);
printf ("%s" ,stu[0].price);
printf ("%s" ,stu[0].qunt);

    return 0;
}
