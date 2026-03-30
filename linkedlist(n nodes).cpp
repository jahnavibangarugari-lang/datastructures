#include<stdio.h>
#include<stdlib.h>
struct node
{ 
	int data;
	struct node*link;
};
int main()
{
	struct node *head=NULL,*newnode=NULL,*temp=NULL;
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
	temp=head;
	while(temp!=NULL)
	{
		printf("\n %d",temp->data);
		temp=temp->link;
	}
	return 0;
}
