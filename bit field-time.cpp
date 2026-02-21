#include <stdio.h>
struct time
{
	unsigned int a:5;
	unsigned int b:6;
	unsigned int c:6;
};
int main()
{
	struct time t;
    printf("enter time values");
    scanf("%d\n%d\n%d",&t.a,&t.b,&t.c);
    printf("%d:%d:%d",t.a,t.b,t.c);
	return 0;
}
