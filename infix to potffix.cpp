#include<stdio.h>
#include<ctype.h>
int precedence(char op)
{
	if(op=='^')
	return 3;
	if(op=='*'||'/')
	return 2;
	if(op=='+'||'-')
	return 1;
	return 0;
}
int main()
{
	char infix[50],stack[50],postfix[50];
	int i=0,j=0,top=-1;
	printf("n enter infix expression:");
	sacnf("%s",infix)
	while(inix[i]!='\0')
	{
		if(isalnum(infix[i]))
		{
			postfix[j]=infix[i];
			j++;
		}
		else if(infix[i]=='(')
		{
			top++;
			stack[top]=infix[i];
		}
		else i(infix[i])
	}
}
