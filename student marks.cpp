#include<stdio.h>
struct student
{;
	int rollnumber;
	float marks;
};
int main()
{
	struct student s[100];
	int count=0,n,i;
	printf("\n enter n value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter student %d roll number:",i+1);
		scanf("%d",&s[i].rollnumber);
		printf("\n enter student % d marks:",i+1);
		scanf("%f",&s[i].marks); 
		if(s[i].marks>=50)
		{
		    count ++;
		}
	}
	printf("no of student marks greater tham 50 is %d",count);
	return 0;
}
