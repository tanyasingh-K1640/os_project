#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
int allocation[10][10],max[10][10],need[10][10],available[10];
int i,j,n,m;
int res_allocation()
{
//int n,m;
printf("enter the noof process :");
scanf("%d",&n);
printf("enter the no of type of resources :");
scanf("%d",&m);
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("enter alocation of resource %d to process %d :",j,i);
scanf("%d",&allocation[i][j]);
printf("enter the max  to process %d  of resources  %d :",j,i);
scanf("%d",&max[i][j]);
need[i][j]=max[i][j]-allocation[i][j];
}
//printf("enter the available resources of Type R%d",j-1);
//scanf("%d",&available[j-1]);
}
for(i=0;i<m;i++)
{
printf("enter the available resources of type R%d",i+1);
scanf("%d",&available[i]);

}}
void display()
{printf("proces  allocaton     max       need \n ");
for(i=0;i<3;i++)
{printf("\t");
for(j=0;j<m;j++)
{
printf(" r%d ",j+1);
}
}
printf("\n");
for(i=0;i<n;i++)
{printf("p%d\t",i+1);
for(j=0;j<m;j++)
{
printf("%d ",allocation[i][j]);
}
printf("\t");
for(j=0;j<m;j++)
{
printf("%d ",max[i][j]);
}
printf("\t");
for(j=0;j<m;j++)
{
need[i][j]=max[i][j]-allocation[i][j];
printf("%d ",need[i][j]);
}

printf("\n");
}
}

int main()
{
res_allocation();
display();
}
