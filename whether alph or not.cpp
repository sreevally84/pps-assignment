#include<stdio.h>
int main()
{
	char ch;
	printf("\n enter any vaild character :");
	scanf("%c", &ch);
	
	if('is alphabet(character)')
	{
		printf("\n you entered an alphabet :" );
	}
	else
	{
		printf("\n %c is not an alphabet", ch);
		printf("\n enter an vaild alphabet");
	}
}
