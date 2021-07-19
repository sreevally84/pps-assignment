#include<stdio.h>
int main()
{
	int empID,hrs,amtperhr;
	float salary;
	printf("\n empID :");
	scanf("%d", &empID);
	printf("\n total worked hrs in a month and the amount he received:");
	scanf("%d%d",&hrs,&amtperhr);
	salary = hrs*amtperhr;
	printf("salary in a month = %.2f", salary,hrs,amtperhr);
	
}
