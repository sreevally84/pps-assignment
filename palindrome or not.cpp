#include<stdio.h>
int main()
{
	int num, temp, rev,digit;
	printf("\n enter a number");
	scanf("%d", &num);
	
	temp = num;
	while( temp > 0)
{
		digit = temp % 10;
		rev = rev * 10 + digit;
		temp = temp / 10;
}
}
