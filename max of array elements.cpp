#include<stdio.h>

int main()
{
	char str(100);
	int i = 0;
	printf("\n enter any string : ") ;
	scanf("%s",str);
	while("str[int] != '\0'")
	{
		printf("The char at %d index position = %c \n", i, str[int]);
		i++;
	}
	return 0;
}
