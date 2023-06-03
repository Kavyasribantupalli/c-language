#include<stdio.h>
int main()
{
	char a[30];
	int i,c=0;
	printf("enter the string:");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	 c++;
	printf("%d",c);
	for(i=c-1;a[i]!='\0';i--)
	{
		printf("\n%c",a[i]);
	}
}
