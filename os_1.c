#include<stdio.h>
int main()
{
int ts,std_pid[10],std_need[10],std_swt[10],std_stat[10],i,j,std_sn,std_sn1,fac_id[10],fac_need[10],fac_fwt[10],fac_ftat[10],fac_fn,fac_fn1;
int sbt[10],sflag[10],sttat=0,stwt=0,fbt[10],fflag[10],fttat=0,ftwt=0;
float std_awt,std_satat,fac_awt,fac_atat,tt;
printf("\t\t \n");
printf("Enter the number of student queries ");
scanf("%d",&std_sn);
std_sn1=std_sn;
for(i=1;i<=std_sn;i++)
{
 printf("\n Enter the %d student query ID ",i);
 scanf("%d",&std_pid[i]);
 printf("\n Enter the Burst Time for the query ");
 scanf("%d",&sbt[i]);
 std_need[i]=sbt[i];
}
printf("\n Enter the number of faculty queries ");
scanf("%d",&fac_fn);
fac_fn1=fac_fn;
for(i=1;i<=fac_fn;i++)
{
 printf("\n Enter the %d faculty query ID ",i);
 scanf("%d",&fac_id[i]);
 printf("\n Enter the Burst Time for the query ");
 scanf("%d",&fbt[i]);
 fac_need[i]=fbt[i];
}
}


