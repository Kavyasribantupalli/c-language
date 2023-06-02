#include<stdio.h>
int main()
{
	char *p1=(char*)1000;
	int *p2=(int*)1000;
	float *p3=(float*)1000;
	double *p4=(double*)1000;
 p1=p1+2;
 p2=p2+2;
p3=p3+2;
	p4=p4+2;
	printf(" %u %u %u %u",p1,p2,p3,p4);
	return 0;
}
