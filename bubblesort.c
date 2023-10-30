#include<stdio.h>
void main()
{
int array[100],n,i,k,j;
printf ("enter the limit: ");
scanf("%d",&n);
printf ("enter the numbers: ");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n-1;i++)
{
   for(j=0;j<n-1-i;j++)
    {
     if(array[j]>array[j+1])
      {
      k=array[j];
      array[j]=array[j+1];
      array[j+1]=k;

     }
    }
}
for(i=0;i<n;i++)
{
printf("\t%d",array[i]);
}
}
