#include<stdio.h>
int main()
{
	char a[30];
	int i,c=0;
	printf("enter string:");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			c++;
			printf("%c ",a[i]);
		}
	}
	printf("\n no of vowels%d",c);
}
