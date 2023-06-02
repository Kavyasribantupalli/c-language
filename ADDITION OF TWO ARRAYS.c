#include<stdio.h>
int main()
{
	int a[20],b[20],i,n;
	printf("enter array size :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter first array=");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nEnter second array=");
		scanf("%d",&b[i]);
	}
	printf("ADDITION OF TWO ARRAYS");
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]+b[i]);
	}
	return 0;
}
