#include<stdio.h>
int main()
{
	int num1, num2, temp;
	printf("Enter num1 and num2 to swap");
	scanf("%d %d",&num1, &num2);
	printf("before swapping values of variables: first number = %d\n",num1);
	printf("before swapping values of variables: second number = %d\n",num2);
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("after swaping first number =%d second number = %d",num1,num2);

    return 0;
}
