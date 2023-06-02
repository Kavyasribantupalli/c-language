#include<stdio.h>
int main()
{
int i,j,k,n,sp;
scanf("%d",&n);
sp=2*n-2;
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("*");
	}
	for(k=1;k<=sp;k++)
	{
		printf(" ");
	}
	sp=sp-2;
	for(j=1;j<=i;j++)
	{
		printf("*");
	}
	printf("\n");
}
sp=0;
for(i=n;i>=1;i--)
{
	for(j=1;j<=i;j++)
	{
		printf("*");
	}
	for(k=1;k<=sp;k++)
	{
		printf(" ");
	}
	sp=sp+2;
	for(j=1;j<=i;j++)
	{
		printf("*");
	}
	printf("\n");
}
}


