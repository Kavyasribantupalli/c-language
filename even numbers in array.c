#include<stdio.h>
int main()
{
	int a[50],i,n;
	printf("enter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n%d",a[i]);
		}
	}
}
