#include<stdio.h>
int main()
{
	int number;
	printf("enter any number:\n ");
	scanf("%d", &number);
	if(number > 0)
	printf("%d is positive number",number);
	else if(number<0)
	printf("%d is negative number ", number);
	else
	printf("entered value zero");
	return 0;
}
