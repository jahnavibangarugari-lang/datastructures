#include <stdio.h>
struct student
{
	int roll;
	float marks;
};
int main()
{
struct student s[];
struct student *ptr;
ptr=s;
int n,i;
printf("\n enter n value");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	printf("\n enter %d student marks")
	scanf("%d",&s[i]);
}
for(int i=0;i<n;i++)
{
	printf("\t %d",a[i]);
}
return 0;
}
