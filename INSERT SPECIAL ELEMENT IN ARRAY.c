#include<stdio.h>
int main()
{
	int a[100],i,n,pos;
	printf("Enter array size");
	scanf("%d",&n);
	printf("Insertion position");
	scanf("%d",&pos);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos-1]=30;
	n++;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}

}
