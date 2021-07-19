#include<stdio.h>
int main()
{
	long s1;
	long s2;
	long s3;
	
	long *p1,*p2,*p3;
	p1=&s1;
	p2=&s2;
	p3=&s3;
	printf("d\n%d\n%d\n",p1,p2,p3);
}
