#include<stdio.h>
int main()
{
	float width , length, perimeter;
	printf("\n enter the width of a rectangle :");
	scanf("%f" ,&width);
	printf("\n enter the length of a rectangle :");
	scanf("%f" ,&length);
	perimeter = 2*(length+width);
	printf("\n perimeter of a rectangle = %2f",perimeter);
	return 0;
	
}
   
    

