#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student {
char names[150];
int id [30];
float average[30];
struct scors{
float math [30];
float phy[30];
float arb [30];

};
};




typedef struct scors sco ;

typedef struct student stud ;
void addid (int k ,stud id [30]){
for (int i=0 ;i<=k ;i++){
    printf ("enter the id of the %d student ::", i);
    scanf ("%s,%d",&id[i]);

}

}

void addname (int k ,stud names [150]){
for (int i=0 ;i<=k;i++){
    printf ("enter the name of the %d student ::" ,i);
    gets ( names );
}
}
void scores (int c,sco math [30]){
for (int i=0 ;i<=c;i++){
  printf ("enter the marke of the %d student in math  ::", i);
    scanf ("%s,%d",&math[i]);
    }
}
void scors (int t,sco arb [30]){
for (int i=0 ;i<=t;i++){
  printf ("enter the marke of the %d student in arabic  ::", i);
    scanf ("%s,%d",&arb [30]);
    }}
    void scres (int p,sco phy [30]){
for (int i=0 ;i<=p;i++){
  printf ("enter the marke of the %d student in  physics  ::", i);
    scanf ("%s,%d",&phy [30]);
    }}


int main()
{
int j ;
stud stu [30];
stud sal [30];
sco math [30];
sco arab [30];
sco phys [30];
void addid (int j ,stud sal[30] );
void addname (int j,stud stu [150]);
void scores (int j,sco math [30]);
void scors (int j,sco arab [30]);
void scres (int j,sco phys [30]);
printf ("give me the num of the sudent :: ");
scanf ("%d" ,&j);
for (int i=0 ;i<=j;i++){
    printf ("enter the name of the %d student :: " ,i);
    scanf ("%s,%d " ,& stu [i]);}

    for (int i=0 ;i<=j ;i++){
    printf ("enter the id of the %d student ::", i);
    scanf ("%s,%d",&sal[i]);}


for (int i=0 ;i<=j;i++){
  printf ("enter the marke of the %d student in  math  ::", i);
    scanf ("%s,%d",&math [30]);
    }

for (int i=0 ;i<=j;i++){
  printf ("enter the marke of the %d student in  arabic ::", i);
    scanf ("%s,%d",&arab[30]);
    }

for (int i=0 ;i<=j;i++){
  printf ("enter the marke of the %d student in  physics  ::", i);
    scanf ("%s,%d",&phys[30]);
    }

stud average [30];
for (int i=0 ;i<=j;i++){
printf("%s,%d" ,stu [i]);
}

    return 0;
}

