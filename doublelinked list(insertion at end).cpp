#include<stdio.h>
#include<stdlib.h>
struct node
{   struct node*prev;
	int data;
	struct node*next;
};
struct node *head=NULL,*temp=NULL,*tail=0;
void create()
{
	struct node *newnode=NULL;
	int n,i;
	printf("n enter no.of nodes:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n enter node %d data:",i+1);
		scanf("%d",&newnode->data);
		newnode->prev=0;
		newnode->next=0;
		if(head==NULL)
		{
			head=tail=newnode;
		}
		else
		{
			tail->next=newnode;
			newnode->prev=tail;
			tail=newnode;
		}
	}
}
void display()
{	temp=head;
	while(temp!=NULL)
	{
		printf("\n %d",temp->data);
		temp=temp->next;
	}
}
int main()
{
	create();
	display();
	struct node *enode=NULL;
	enode=(struct node*)malloc(sizeof(struct node));
	printf("\n enter newely created data: ");
	scanf("%d",&enode->data);
	enode->prev=0;
	enode->next=0;
	enode->prev=tail;
	tail->next=enode;
	tail=enode;
	display();
	return 0;
}
