#include<stdio.h>
int main()
{
	int a[100],i,n,j,count;
	printf("enter the array size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=-1)
		{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=-1;
				count++;
			}
	    }
		printf(" %d-%d",a[i],count);
	}
	}
}
