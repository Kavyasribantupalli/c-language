#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
		{
			if(j%4==0)
			{
				printf(" @");
			}
			else if(j%2==0)
			{
				printf(" *");
			}
			else
			printf(" %d",j);
		}
		printf("\n");
	}
}
