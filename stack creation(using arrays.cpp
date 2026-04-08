#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push()
{
	int a;
	if(top==MAX-1)
	{
		printf("\n overflow");
	}
	else
	{
		printf("\n enter element: ");
		scanf("%d",&a);
		top++;
		stack[top]=a;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\n underflow");
	}
	else
	{
		int temp;
		temp=stack[top];
		printf("\n the popped element:%d",temp);
		top--;
	}
	void peek()
	{
		if(top==-1)
		{
			printf("\n underflow");
		}
		else
		{
			printf("\n the top most element:%d",stack[top]);
		}
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("\n underflow");
	}
	else
	{
		for(i=0;i>=0;i--)
		{
			printf("\n %d",stack[i])
		}
	}
}
int main()
{
	int choice,ch=1;
	while(ch)
	{
		printf("\n 1.push()\n2.pop()\n3.peek()\n4.isplay()");
		printf("\n enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
				case 2
				
		}
	}
}
