#include<stdio.h>
void main()
{
	int l,b,a,pe;
	int *p,*q,*r,*s;
	p=&l,q=&b,r=&a,s=&pe;
	scanf("%d %d",p,q);
	*r=*p**q;
	*s=2*(*p+*q);
	printf("area=%d",*r);
	printf("perimeter=%d",*s);
}
