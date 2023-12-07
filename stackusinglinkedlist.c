#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int stack[100],choice,n,top,x,i,s,flag;
void push(void);
void pop(void);
void display(void);
void search(void);
struct node
{
        int data;
        struct node *next;
};
struct node *head;
int main()
{
top=-1;
printf("STACK OPERATION USING LINKED LIST");
printf("\n\t1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.SEARCH\n\t5.EXIT");
do
{
printf("\nenter your choice\n");
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
	break;
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
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node*));
        printf("\nenter the data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
                head=newnode;
        }
        else
        {
                newnode->next=head;
                head=newnode;
        }
        printf("Pushed element is %d",newnode->data);
}

void pop()
{
        struct node *temp;
        if(head==NULL)
        {
                printf("\nStack Underflow\n");
        }
        else
        {
                temp=head;
                head=head->next;
                printf("Popped element is %d",temp->data);
                free(temp);
        }
}

void display()
{
        struct node *temp;
        temp=head;
        if(head==NULL)
        {
                printf("\nStack Empty\n");
        }
        else
        {
		printf("\n The elements in Stack are\n");
                while(temp!=NULL)
                {
                        printf("\n %d",temp->data);
                        temp=temp->next;
                }
        }
}
void search()
{
        int key=0;
        int pos=0;
        struct node *temp;
        printf("\nEnter the Data to be searched:");
        scanf("%d",&key);
        temp=head;
        while(temp->next!=NULL)
        {
                if(temp->data==key)
                {
                        printf("%d found ",key);
                        break;
                }
        temp=temp->next;
        pos++;
        }
        if(temp->next==NULL)
        {
                if(key==temp->data)
                {
                        printf("%d found ",key);
                }
                else
                {
                        printf("\nData Not Found");
                }
        }
}        
