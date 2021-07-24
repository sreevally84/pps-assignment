#include<stdio.h>
int main()
{
	char name[40];
	char gender;
	printf("enter name: ");
	gets(name);
	printf("enter gender(m/f): ");
	scanf("%c",&gender);
	
	if(gender == 'm'||gender =='M')
        printf("hello Mr.%s.\n",name)
    elseif(gender == 'f'||gender =='F')
	    printf("Hello miss %s .\n",name)
	else
	    printf("hello n/a %s.\n",name)
		return 0;
	
}
