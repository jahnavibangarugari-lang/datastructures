#include<stdio.h>
struct student 
{
    int marks;
};  
int main()
{
	int n,i,total;
	float avg;
	struct student s[100];
	printf("Enter n value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter student %d marks:",i+1);
		scanf("%d",&s[i].marks);
		total=total+s[i].marks;
	}
	avg=(float)(total/n);
	printf("\n total marks=%d \n average marks =%f",total,avg);
	return 0;
}


