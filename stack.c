#include<stdio.h>

int stack[100],choice,n,top,x,i,s,flag;
void push(void);
void pop(void);
void display(void);
void search(void);

int main()
{
top=-1;
printf("enter the size of the stack");
scanf("%d",&n);
printf("STACK OPERATION USING ARRAY");
printf("\n\t1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.SEARCH\n\t5.EXIT");
do
{
printf("\nenter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
search();
}
case 5:
{
printf("\n EXIT POINT");
break;
}
default:
{
printf("\n Enter a valid choice\n");
}
}
}
while(choice!=5);
return 0;
}

void push()
{
if(top>=n-1)
{
printf("\nstack is overflow\n");
}
else
{
printf("\nenter the element to be pushed\n");
scanf("%d",&x);
top++;
stack[top]=x;
}
}

void pop()
{
if (top<=-1)
{
printf("\nstack is underflow\n");
}
else
{
printf("\nthe popped element is \n%d",stack[top]);
top--;
}
}

void display()
{
if (top>=0)
{
printf("\nelemnts in the stack are\n");
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
printf("\nenter next choice");
}
else
{
printf("\nstack is empty");
}
}

void search()
{
printf("\n\t Enter the element to be searched\n\t");
scanf("%d",&s);
for(i=top;i>=0;i--)
if(stack[i]==s)
{
flag=1;
break;
}
else
{
flag=0;
}
if(flag==1)
{
printf("searched element found");
}
else
{
printf("searched element not found");
}
}


















