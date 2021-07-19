#include<stdio.h>
int main()
{
	int num;
	printf("enter an integer value");
	scanf("%d", &num);
	if(num % 2 == 0)
    {

		printf("\n %d is an even number ",num);
   }
   else
   	{
   		printf("\n %d is an odd number",num);
   }
	   return 0;

}
