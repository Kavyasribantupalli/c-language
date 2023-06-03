#include<stdio.h>
int main()
{
	char a[100];
	int i,j,c;
	printf("enter the string");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!='1')
		{
			c=1;
			for(j=i+1;a[j]!='\0';j++)
			{
				if(a[i]==a[j])
				{
					a[j]='1';
					c++;
				}
			}
			printf("\n%c-%d",a[i],c);
		}
	}
}
