#include<stdio.h>
int main()
{
	int sec,hr,min,s;
	printf("input seconds:");
	scanf("%d", &sec);
	hr = (sec/3600);
	min = (sec -(3600*hr))/60;
	s = (sec - (3600*hr)-(min*60));
	printf("hr:min:s - %d:%d:%d\n",hr,min,s);
	return 0;

}
