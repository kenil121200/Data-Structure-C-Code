#include<stdio.h>
void main()
{
	int a[5],i,max,sec;
	printf("enter the array");
	for(i=0;i<5;i++)
	{

		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>max)
		{
			sec=max;
			max=a[i];
		}
		else if(a[i]>sec && a[i]!=max)
		{
			sec=a[i];
		}
	}
	printf("MAX= %d",max);
	printf("second largest= %d",sec);

}
