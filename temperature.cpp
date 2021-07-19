#include<stdio.h>
int main()
{
	float celcius,foreinheit;
	printf("\n enter temperature in foreinheit :");
	scanf("%f" ,&foreinheit);
	printf("\n enter temperature in celcius :");
	scanf("%f" ,&celcius);
	celcius = (foreinheit-32)*5/9;
	printf("\n celsius = %foreinheit",celcius);
	
}
