#include<stdio.h>
int main()
{
	int a,b,c,sum,average,product;
	float avg;
	printf("\n enter a,b,c:");
	scanf("%d%d%d", &a,&b,&c);
	sum = a+b+c;
	product = a*b*c;
	avg = (a+b+c)/3;
	printf("\nsum=%d\nproduct=%d\navg=%f\n" ,sum,product,avg);
	return 0;
}
