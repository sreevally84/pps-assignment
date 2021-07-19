#include<stdio.h>
int main()
{
	int items;
	float cost,wt,tcost,twt;
	printf("\n enter no of items:");
	scanf("%d", &items);
	printf("\n cost (in rupess):");
	scanf("%f", &cost);
	printf("\n weight(in kg):");
	scanf("%f" ,&wt);
	tcost = items*cost;
	printf("twt=%.2frupee\n",tcost,items,cost);
	twt = items*wt;
	printf("twt=%.2fkg\n",twt,items,wt);
	return 0;
	
}
