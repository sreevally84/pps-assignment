#include<stdio.h>
int main()
{
	int sum=0,num;
	printf("enter 10 numbers :");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&num);
		sum+=num;
		
	}
	printf("sum = %d",sum);
	return 0;
}
