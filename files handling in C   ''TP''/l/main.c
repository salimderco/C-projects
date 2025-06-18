#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_items 0
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
for (int i=0 ;i<=max_items;i++){
    printf ("enter the name of the %d items please ::\n" ,i+1);
  scanf ("%s",&stu[i].names);
printf ("enter the id of the %d items please ::\n" ,i+1);
  scanf ("%d",&stu[i].id);
  printf ("enter the price of the %d items please ::\n" ,i+1);
  scanf ("%f",&stu[i].price);
  printf ("enter the quntite of the %d items please ::\n" ,i+1);
  scanf ("%f",&stu[i].qunt);

}}
    void update (stud stu [30],int s,int l){
  if   (s==pass){
   for (int i=l ;i<=l;i++){
     printf ("please give the update name of the %d items ::\n" ,i);
  scanf ("%s",&stu[i].names);
printf (" please give the update id of the %d items ::\n" ,i);
  scanf ("%d",&stu[i].id);
  printf ("please give the update price of the %d items  ::\n" ,i);
  scanf ("%f",&stu[i].price);
  printf ("please give the update quntite of the %d items ::\n" ,i);
  scanf ("%f",&stu[i].qunt);

}}
else {
    printf ("your ronge");
}
}

void delete_items (stud stu[30] ,int l,int j){
    if (l==del){
for (int i=j;i<=j;i++){
   strcpy( stu [i].names ,"None");
   stu[i].id =0;
   stu[i].price=0;
    stu[i].qunt=0;


}

}
else {
    printf ("your rong ");
}
}
void print (stud stu [30]){
for (int i=0;i<=max_items ;i++){

printf ("this is the name of the  %d items :: %s\n " ,i,stu[i].names);
printf ("this is the id   of the  %d items :: %.2d\n ",i ,stu[i].id);
printf ("this is the price of the  %d items :: %.2f \n " ,i,stu[i].price);
printf ("this is the qunt of the  %d items :: %.2f\n " ,i,stu[i].qunt);
}}

int main()
{

stud stu [30];
int s,u,m ,l;
add_a_new_items(stu);

printf ("sir  .pleas enter 1 if you update your data ::\n");
scanf("%d" ,&s);
if (s==1){
printf ("sir . please enter the number of the items that you wanna update it ::\n" );
scanf("%d" ,&u);
update( stu, s,u);
}

else {
  printf ("sir  .pleas enter 2 if you delete your data ::\n");
scanf("%d" ,&l);
    printf ("sir . please enter the number of the items that you wanna delete it ::\n" );
scanf("%d" ,&m);
delete_items ( stu,l, m);
}

print (stu);

    return 0;
}
