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
	for(i=n-1;i>=0;i--)
	{
		if(a[i]<0)
		{
			printf("\n%d",a[i]);
		}
	}
}
