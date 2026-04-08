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
	printf("n enter no.of nodes:");
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
	int i,pos;
	printf("\n enter any position:");
	scanf("%d",&pos);
	struct node *delnode=0;
	if(head==NULL)
	{
		printf("\n list is empty");
	}
	else if(pos==1)
	{
	if(head==tail)
	{
		free(head);//if single node is present
		head=tail=0;
	}
	else //to delete first node (pos==1) if n nodes are present
	{
		temp=head;
		head=head->next;
		free(temp);
		tail->next=head;
		}	
	}
	else
	{
		temp=head;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		delnode=temp->next;
		if(temp->next==tail)//deleting last node from n nodes
		{
			free(tail);
			temp->next=head;
			tail=temp;
		}
		else//deletion any node from pos==1 to n
		{
			temp->next=delnode->next;
			free(delnode);
		}
	}
	printf("\n after deletion:");
	display();
	printf("\n %d",tail->next->data);
	return 0;
}
