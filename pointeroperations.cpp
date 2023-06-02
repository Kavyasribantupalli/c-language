#include<stdio.h>
int main()
{
	int *p1=(int*)1000;
	int *p2=(int*)2000;
	//no of values=address diggerences/size of datatype
	printf(" no of values:%d",p2-p1);
}
