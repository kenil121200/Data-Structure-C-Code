#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top=-1;
char stack[100];
void push(char);
void pop();
void main()
{
	int i;
	char a[100];
	printf("enter the expression\n");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='(')
		{
			push(a[i]);
		}
		else if(a[i]==')')
		{
			pop();
		}
	}
	if(top==-1)
		printf("balance\n");
	else
		printf("unbalance\n");
}

void push(char a)
{
	stack[top]=a;
	top++;
}
void pop()
{
	if(top==-1)
	{
		printf("unbalance\n");
		exit(0);
	}
	else
	{
		top--;		
	}
}
