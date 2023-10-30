#include<stdio.h>
void main()
{
int a[100],b[100],c[100],m,n,i,j,k=0;
printf ("enter the limit of first array");
scanf("%d",&m);
printf ("enter the elements of first array");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf ("enter the limit of second array");
scanf("%d",&n);
printf ("enter the elements of second array");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
i=0;
j=0;

while(i<m&&j<n)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
if(i>=m)
{
while(j<n)
{
c[k]=b[j];
i++;
j++;
}}
if(j>=n)
{
while(i<m)
{
c[k]=a[i];
i++;k++;
}
}
printf("\nmerged array =\n");
for(i=0;i<m+n;i++)
{
printf("\n%d",c[i]);
}}


