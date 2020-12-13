#include<stdio.h>
void main()
{
int a[5],i,max;
clrscr();
	for(i=0;i<5;i++)
	{
	  printf("enter the value");
	  scanf("%d",&a[i]);
	}
	max=a[0];

	for(i=1;i<5;i++)
	{
		if(a[i]>max)
		{
		  max=a[i];
		}


	}


	printf("max=%d",max);
}
