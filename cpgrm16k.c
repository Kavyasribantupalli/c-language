#include<stdio.h>
int main()
{
	int x=10;
	int *p=&x;
	printf("%u",p);
	printf("\n%d",*p);
//	printf(" \n%d",**p);
	return 0;
}
