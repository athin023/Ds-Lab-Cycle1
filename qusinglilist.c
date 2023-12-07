#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int queue[100],choice,n,top,x,i,s,flag;
void dq	(void);
void nq(void);
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
printf("QUEUE USING LINKED LIST");
printf("\n\t1.ENQUEUE\n\t2.DEQUEUE\n\t3.DISPLAY\n\t4.SEARCH\n\t5.EXIT");
do
{
printf("\nenter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
 {
	nq();
	break;
}
case 2:
 {
	dq();
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
void nq()
{
        struct node *newnode,*temp;
        newnode=(struct node*)malloc(sizeof(struct node*));
        printf("enter the data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
                head=newnode;
        }
        else
        {
                temp=head;
                while(temp->next!=NULL)
                {
                        temp=temp->next;
                }
                temp->next=newnode;
                temp=newnode;
        }
        printf("inserted element is: %d",newnode->data);
}



void dq()
{
        struct node *temp;
        if(head==NULL)
        {
                printf("no elements");
        }
        else
        {
                temp=head;
                head=head->next;
                printf("deleted element is %d",temp->data);
                free(temp);
        }
}
void display()
{
        struct node *temp;
        temp=head;
        if(head==NULL)
        {
                printf("there are no elements to dislpay");
        }
        else
        {
		printf("\n the elements are");
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


