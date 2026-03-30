#include<stdio.h>
#include<stdlib.h>
struct node
{ 
	int data;
	struct node*link;
};
struct node *head=NULL,*temp=NULL;
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
		newnode->link=NULL;
		if(head==NULL)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->link=newnode;
			temp=newnode;
		}
	}
}
void display()
{	temp=head;
	while(temp!=NULL)
	{
		printf("\n %d",temp->data);
		temp=temp->link;
	}
}
int main()
{
	create();
	display();
	struct node *snode=NULL;
	int i,pos;
	snode=(struct node*)malloc(sizeof(struct node));
	printf("\n enter newely created node data: ");
	scanf("%d",&snode->data);
	snode->link=NULL;
	printf("\n enter position");
    scanf("%d",&pos);
    if(pos==1)
    {
    	snode->link=head;
    	head=snode;
	}
	else
	{
		temp=head;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->link;
		}
		snode->link=temp->link;
		temp->link=snode;
	}
	display();
	return 0;
	
}
