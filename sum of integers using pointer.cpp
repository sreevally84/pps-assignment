#include<stdio.h>
int main()
{
	int num1,num2,sum;
	int *ptr1,*ptr2;
	
	ptr1=&num1;
	ptr2=&num2;
	printf("\n enter two integers ");
	scanf("%d %d", ptr1,ptr2);
	sum = *ptr1 +*ptr2;
	printf("sum of two integers is = %d", sum);
	return 0;
	
}
