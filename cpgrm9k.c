#include<stdio.h>
void main()
{
	int x,y,z;
	int *p,*q,*r;
	p=&x,q=&y,r=&z;
	printf("enter the numbers");
	scanf("%d %d",p,q);
    *r=*p+*q;
//	printf("%d",z);	
printf("%d",*r);
}
