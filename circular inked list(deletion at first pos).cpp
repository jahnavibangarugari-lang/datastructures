#include<stdio.h>
#include<stdlib.h>
struct node
{ 
	int data;
	struct node*next;
};
struct node *head=NULL,*temp=NULL,*tail=0;
void create()
{
	struct node *newnode=NULL;
	int n,i;
	printf("\n enter no.of nodes:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n enter node %d data:",i+1);
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==NULL)
		{
			head=tail=newnode;
			tail->next=head;
		}
		else
		{
			tail->next=newnode;
			tail=newnode;
			tail->next=head;
		}
	}
}
void display()
{	temp=head;
    do
    {
    	printf("\n %d",temp->data);
    	temp=temp->next;
	}while (temp!=head);
}
int main()
{
	create();
	display();
	if(head==0)
	{
		printf("\n LIST IS EMPTY");
	}
	else if(head==tail)
	{
		free(head);
		head=tail=0;
	}
	else
	{
		temp=head;
		head=head->next;
		free(temp);
		temp->next=head;
	}
	printf("\n after deletion");
	display();
	printf("\n %d",tail->next->data);
	return 0;
}
