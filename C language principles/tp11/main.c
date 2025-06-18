#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_etu 0
struct student {
char names[30];
int id ;
float average;
struct scors{
 struct alg{
float algc ;
float algtd ;
}al;
struct {
float analc;
float analtd;
}an;
struct asd{
float asdc;
float asdtd;
float asdtp;
}as;
struct ado{
float adoc;
float adotd;
}ad;
struct ise {
float isec;
float isetp;
}is;
struct tee{
float teec;
}te;

struct bw{
float bwc;
float bwtp;
}b;
}sco;
};

typedef struct student stud ;

    void addname (stud stu[30] ){
for (int i=0 ;i<=max_etu;i++){
    printf ("enter the name of the %d student ::\n" ,i+1);
  scanf ("%s",&stu[i].names);
printf ("enter the id of the %d student ::\n" ,i+1);
  scanf ("%d",&stu[i].id);
    printf ("enter the mark of the %d student in anal ex ::\n" ,i+1);
  scanf ("%f",&stu[i].sco.an.analc);
     printf ("enter the mark of the %d student in anal td ::\n" ,i+1);
  scanf ("%f",&stu[i].sco.an.analtd);
printf ("enter the mark of the %d student in alg ex ::\n" ,i+1);
  scanf ("%f",&stu[i].sco.al.algc);
  printf ("enter the mark of the %d student in alg td ::\n" ,i+1);
  scanf ("%f",&stu[i].sco.al.algtd);
printf ("enter the mark of the %d student in ado ex ::\n" ,i+1);
  scanf ("%f",&stu[i].sco.ad.adoc);
  printf ("enter the mark of the %d student in ado td ::\n" ,i+1);
  scanf ("%f",&stu[i].sco.ad.adotd);
  printf ("enter the mark of the %d student in asd ex ::\n" ,i+1);
  scanf ("%f",&stu[i].sco.as.asdc);
   printf ("enter the mark of the %d student in asd td ::\n" ,i+1);
  scanf ("%f",&stu[i].sco.as.asdtd);
   printf ("enter the mark of the %d student in asd tp ::\n" ,i+1);
  scanf ("%f",&stu[i].sco.as.asdtp);
  printf ("enter the mark of the %d student in ise ex ::\n" ,i+1);
  scanf ("%f",&stu[i].sco.is.isec);
   printf ("enter the mark of the %d student in ise tp ::\n" ,i+1);
  scanf ("%f",&stu[i].sco.is.isetp);
  printf ("enter the mark of the %d student in tee ex ::\n" ,i+1);
  scanf ("%f",&stu[i].sco.te.teec);
  printf ("enter the mark of the %d student in bw ex ::\n" ,i+1);
  scanf ("%f",&stu[i].sco.b.bwc);
  printf ("enter the mark of the %d student in bw tp ::\n" ,i+1);
  scanf ("%f",&stu[i].sco.b.bwtp);
}}
void print (stud stu [30]){
for (int i=0 ;i<=max_etu;i++){
  printf (" the name of the %d student :: %s \n" ,i+1,stu[i].names);
printf ("enter the id of the %d student ::%.2d \n" ,i+1,stu[i].id);
printf ("enter the mark of the %d student in anal ex::%.2f \n" ,i+1,stu[i].sco.an.analc);
printf ("enter the mark of the %d student in anal td::%.2f \n" ,i+1,stu[i].sco.an.analtd);
printf ("enter the mark of the %d student in alg ex ::%.2f \n" ,i+1,stu[i].sco.al.algc);
printf ("enter the mark of the %d student in alg td ::%.2f \n" ,i+1,stu[i].sco.al.algtd);
printf ("enter the mark of the %d student in asd ex ::%.2f \n" ,i+1,stu[i].sco.as.asdc);
printf ("enter the mark of the %d student in asd td ::%.2f \n" ,i+1,stu[i].sco.as.asdtd);
printf ("enter the mark of the %d student in asd tp ::%.2f \n" ,i+1,stu[i].sco.as.asdtp);
printf ("enter the mark of the %d student in ado ex ::%.2f \n" ,i+1,stu[i].sco.ad.adoc);
printf ("enter the mark of the %d student in ado td ::%.2f \n" ,i+1,stu[i].sco.ad.adotd);
printf ("enter the mark of the %d student in ise ex ::%.2f \n" ,i+1,stu[i].sco.is.isec);
printf ("enter the mark of the %d student in ise tp ::%.2f \n" ,i+1,stu[i].sco.is.isetp);
printf ("enter the mark of the %d student in tee ex ::%.2f \n" ,i+1,stu[i].sco.te.teec);
printf ("enter the mark of the %d student in bw  ex ::%.2f \n" ,i+1,stu[i].sco.b.bwc);
printf ("enter the mark of the %d student in bw  tp ::%.2f \n" ,i+1,stu[i].sco.b.bwtp);

}
}

int main()
{

stud stu [30];
addname(stu);
print (stu);
for (int i=0 ;i<=max_etu;i++){
stu[i].average = ((((((stu[i].sco.an.analc)*0.6)+((stu[i].sco.an.analtd)*0.4)))*6) +
                ((((stu[i].sco.as.asdc)*0.6)+(((stu[i].sco.as.asdtd)*0.2)+((stu[i].sco.as.asdtp)*0.2)))*6) +
                 ((((stu[i].sco.ad.adoc)*0.6)+((stu[i].sco.ad.adotd)*0.4))*4) +
                 ((((stu[i].sco.is.isec)*0.6)+((stu[i].sco.is.isetp)*0.4))*4) +
                 (((stu[i].sco.te.teec)*1)*1) +
                 ((((stu[i].sco.b.bwc)*0.6)+((stu[i].sco.b.bwtp)*0.4))*1) +
                 ((((stu[i].sco.al.algc)*0.6)+((stu[i].sco.al.algtd)*0.4))*4))/26  ;
printf ("%.2f\n" ,stu[i].average) ;
};

    return 0;
}