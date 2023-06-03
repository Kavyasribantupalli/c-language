#include<stdio.h>
int main()
{
	char a[50];
	scanf("%s",a);
	printf("given string:%s\n",a);
	//fflush(stdin);
	char b[50];
	scanf("%[^\n]s",b);
	printf("\ngiven string:%s",b);	
}
