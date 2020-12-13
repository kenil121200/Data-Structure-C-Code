#include<stdio.h>
void swap(int a, int b)
{
	int c;
	c=a;
	a=b;
	b=c;
        printf("a=%d b=%d\n",a,b);
}
void main()
{
	int a,b;
	printf("enter the value of a:\n");
	scanf("%d",&a);
	printf("enter the value of b:\n");
	scanf("%d",&b);
	swap(a,b);
}
