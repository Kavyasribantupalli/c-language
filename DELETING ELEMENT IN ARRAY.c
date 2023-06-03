#include<stdio.h>
int main()
{
	int a[100],i,n,delelement,pos;
	printf("Enter array size");
	scanf("%d",&n);
	printf("\n deleted element");
	scanf("%d",&delelement);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]==delelement)
		    pos=i;
	}
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		printf(" %d",a[i]);
	}
}
