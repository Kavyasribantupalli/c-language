#include<stdio.h>
int main()
{
	int a[100],i,n,max,min;
	printf("Enter array size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
		else if(a[i]>max)
		  max=a[i];
	}
	printf("\nmin=%d",min);
	printf("\nmax=%d",max);
	return 0;
}
