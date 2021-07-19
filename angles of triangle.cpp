#include<stdio.h>
int main ()
{
	int a, b, c;
	printf("\n enter two angles of a triangle \n");
	scanf("%f%f",&a, &b);
	c = 180 - (a+b);
	printf("\n third angle of a triangle = %.2f\n",c);
	return 0;
	
}
