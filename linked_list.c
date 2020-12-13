#include<stdio.h>
#include<stdlib.h>

struct node
{
	int val;
	struct node *ptr;
};

struct node *insert(struct node * H,int v)
{
	struct node *new,*temp;
	new=(struct node*)malloc(sizeof(struct node));
	new->val=v;
	if(H == NULL)
	{
		return new;
	}
	temp=H;
	while(temp->ptr != NULL)
	{
		temp=temp->ptr;
	}
	temp->ptr=new;
	new->ptr=NULL;
	return H;
}

struct node* insert_f(struct node * H,int v)
{
	struct node * new;
	new=(struct node*)malloc(sizeof(struct node));
	new->val=v;
	new->ptr=H;
	return new;
}

struct node* insertbefore(struct node *H,int v,int B)
{
	struct node * new,* temp;
	new=(struct node *)malloc(sizeof(struct node));
	new->val=v;
	if(B == H->val)
	{
		H=insert_f(H,v);
		return H;
	}
	temp=H;
	while(temp->ptr != NULL && temp->ptr->val != B)
	{
		temp=temp->ptr;
	}
	if(temp->ptr == NULL)
	{
		printf("value %d not found !! ",B);
		return H;
	}
	else
	{
		new->ptr=temp->ptr;
		temp->ptr=new;
		return H;
	}
}

void traverse(struct node * H)
{
	struct node* temp;
	temp=H;
	if(H == NULL)
	{
		printf("\nlist is empty\n");
		return;
	}
	while(temp->ptr != NULL)
	{
		printf("%d\t",temp->val);
		temp=temp->ptr;
	}
	printf("%d",temp->val);
}

void main()
{
	struct node *head;
	head=NULL;
	int i,a,c,b;
	
	while(1)
	{
		printf("\n================================================\n");
		printf("\nlist is : \n");
		traverse(head);
		printf("\n1.For insert node \n2.For insert at front  \n3.Enter before specific value \n4.For display \n5. Exit\nEnter your choice:: ");
		scanf("%d",&a);
		printf("\n================================================\n");
		switch(a)
		{
			case 1: printf("enter value  : ");
			scanf("%d",&c);
			head=insert(head,c);
			break;
			case 4: traverse(head);
			break;
			case 2: printf("enter value : ");
			scanf("%d",&c);
			head=insert_f(head,c);
			break;
			case 3: printf("enter value : ");
			scanf("%d",&c);
			printf("before which value : ");
			scanf("%d",&b);
			if(head!=NULL)
			{
				head=insertbefore(head,c,b);
			}
			else
			{
				printf("list is empty :!");
			}
			break;
			case 5:
			exit(0);
			
			break;
		}
}


}
