#include<stdio.h>
void main()
{
int array[100],n,i,sum=0;
printf ("enter the limit: ");
scanf("%d",&n);
printf ("enter the numbers: ");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
sum=sum+array[i];
}
printf("the numbers are: ");
for(i=0;i<n;i++)
{
printf("%d",array[i]);

}
printf("sum =  %d",sum);
}
