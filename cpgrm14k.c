#include<stdio.h>
void main()
{
	float p,t,r,sp;
	float*x,*y,*z,*m;
	x=&p,y=&t,z=&r,m=&sp;
	printf("enter the values");
	scanf("%f %f %f",x,y,z);
	*m=(*x**y**z)/100;
	printf("%f",*m);
}
