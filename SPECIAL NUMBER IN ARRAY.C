#include<stdio.h>
int main()
{
	int a[20],i,n;
	printf("enter array size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			printf("\n%d",a[i]);
		}
	}
	return 0;
}
