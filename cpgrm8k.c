#include<stdio.h>
void main()
{
	int x=10,y=20;
	int *p,*q;
	p=&x;
	q=&y;
	printf("%u %u",p,q);
	printf("\n%lx %lx",p,q);
	printf("\n%d %d",&p,&q);
	printf("\n%d %d",*p,*q);
	printf("\n %d %d",*&x,*&y);
	
}
