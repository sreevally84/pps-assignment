#include<stdio.h>
int main()
{
	int number,i;
	printf("\n enter the maximum integer value : ");
	scanf("%d", &number);
	
	printf("\n list of natural number from %d to 1 are \n", number);
	for(i = number; i >= 1; i--)
	{
		printf(" %d \t",i);
	}
	return 0;
}
