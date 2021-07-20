#include<stdio.h>
int main()
{
	int n, numbers, i=0,sum=0;
	float average;
	printf("\n enter numbers\n");
	scanf("%d", &n);
	printf("\n enter the elements one by one\n");
	while(i<n)
	{
		scanf("%d", &numbers);
		sum = sum + numbers;
	}
	average = sum/n;
	printf("\n sum of the %d numbers = %d",n, sum);
	printf("\n average of the %d numbers = %.2f",n,average);
	return 0;
}
