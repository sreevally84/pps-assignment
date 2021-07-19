#include<stdio.h>
int main()
{
	float feet, inches;
	printf("enter feet to be converted into inches:");
	scanf("%f", &feet);
	inches = feet * 12;
	printf("inches are =%.2f",inches);
	return 0;
}
