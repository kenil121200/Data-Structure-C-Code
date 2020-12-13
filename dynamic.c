#include<stdio.h>
void main()
{
	int *a;
	int n,i;
	
	printf("enter number of elements:: ");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nelement %d: ",i+1);
		printf("%d",a[i]);
	}
}
