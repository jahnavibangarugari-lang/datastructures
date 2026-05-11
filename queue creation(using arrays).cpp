#include<stdio.h>
#define MAX 5
int queue[MAX];
int rear=-1;
int front=-1;
void enqueue()
{
	int a;
	if(rear==MAX-1)
	{
		printf("\n overflow");
	}
	else
	{
		printf("\n enter element:");
		scanf("%d",&a);
		if(rear==-1 && front==-1)
		{
			rear=front=0;
			queue[rear]=a;
		}
		else
		{
			rear ++;
			queue[rear]=a;
		}
	}
}
void dequeue()
{
	int temp;
	if(front==-1)
	{
		printf("\n underflow");
	}
	else if(rear==front)
	{
		temp=queue[front];
		printf("\n the dequeued element is=%d",temp);
		rear=front=-1;
	}
	else
	{
		temp=queue[front];
		printf("\n the dequeue element is=%d",temp);
		front ++;
	}
}
void peek()
{
	if(front==-1)
	{
		printf("\n underflow");
	}
	else
	{
		printf("the front element=%d",queue[front]);
	}
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("\n underflow");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("\n %d",queue[i]);
		}
	}
}
int main()
{
    int choice,ch=1;
	while(ch)
	{
		printf("\n 1.enqueue() \n 2.dequeue() \n 3.peek()  \n 4.display()");
		printf("\n enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			default:
				printf("\n invalid option");
		}
		printf("\n do you want another option (yes:1||no:0):");
		scanf("%d",&ch);
	}
	return 0;
}
