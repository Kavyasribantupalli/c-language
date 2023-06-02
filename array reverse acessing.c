#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("enter the array size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
	
}
