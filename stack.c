#include<stdio.h>

# define MAX 100
# define P printf
# define S scanf
void push(int stk[], int val);
int pop(int stk[]);
void disp(int stk[]);
int top=-1;
void main()
{
	int stk[MAX];
	int opt,val;
	

	do
	{
		P("press 1 for push\n");
		P("press 2 for pop\n");
		P("press 3 for display\n");
		P("press 4 for exit \n");
		S("%d",&opt);
		switch(opt)
		{
			case 1:
			P("enter the value you want to push :");
			S("%d",&val);
			push(stk,val);
			break;
			
			case 2:
			val=pop(stk);
			if(val!= -1);
			P("\n the value deleted from stack: %d\n",val);
			break;
			
			case 3:
			disp(stk);
			break;
		}
	}while(opt!=4);
	
}

void push(int stk[], int val)
{
	if(top==MAX-1)
	{
		P("stack is full\n");
		

	}
	else
	{
		
		stk[++top]=val;
	}	
}
int pop(int stk[])
{
	int temp;
	if(top==-1)
	{
		P("stack is empty\n");
		return -1;		
	}
	else
	{
		temp=stk[top--];
		return temp;
	}
}
void disp(int stk[])
{
	int i;
	if(top==-1)
	{
		P("stack is empty\n");
	}
	else
	{	
		for(i=top;i>=0;i--)
		P("\n%d\n",stk[i]);
		
	}
}

