#include<stdio.h>
struct complex
{
	int real;
	int imaginary;
} ;
int main()
{
	int i,n;
	struct complex c[10];
	printf("enter the number of complex numbers: ");
	scanf("%d", &n);
	printf("\n enter real part and imaginary part of each complex number: ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&c[i].real);
	scanf("%d",&c[i].imaginary);
	}
	for(i=0;i<n;i++)
	{
	if(c[i].imaginary<0)
	printf("\n the complex number is : %d%di",c[i].real,c[i].imaginary);
	else
	printf("\n the complex number is : %d +%di",c[i].real,c[i].imaginary);
   }
	
}
