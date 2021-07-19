#include<stdio.h>
int main()
{
	int x;
	float y;
	printf("\n distancenin km:");
	scanf("%d" ,&x);
	printf("\n average consumption (km/liter) :");
	scanf("%f" ,&y);
	printf("\n fuel spent in litres: ");
	scanf("%f" ,&y);
	printf("\n average consumption (km/lt)%.2f" ,x/y);
	return 0;
}
