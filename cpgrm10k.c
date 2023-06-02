#include<stdio.h>
void main()
{
	float r;
	float area,perimeter;
	float *p,*q,*s;
	p=&r;
	q=&area;
	s=&perimeter;
	printf("enter radius");
	scanf("%f",p);
	*q=3.14*(*p)*(*p);
	*s=2*3.14*(*p);
	printf("%f",*q);
	printf("\n%f",*s);
	
}
