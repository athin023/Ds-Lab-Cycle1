#include<stdio.h>
void main()
{
int array[100],n,i,key,f=0;
printf ("enter the limit: ");
scanf("%d",&n);
printf ("enter the numbers: ");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
printf ("enter the element to search");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(array[i]==key)
{
f=1;
break;
}
}
if(f==1)
{
printf("the elements are found");}
else{
printf("the elements are not found");}}
