#include<stdio.h>
struct employee
{
	int ID;
	char name;
	int emp; 
	int salary;
}e,*sptr;
int main()
{
	sptr=&e;
	printf("enter the name of employee");
	scanf("%s",&sptr->name);
	printf("enter the emp");
	scanf("%d",sptr->emp);
	printf("enter the salary");
	scanf("%d",&sptr->salary);
	printf("name :%s emp:%d salary:%d",sptr->name,sptr->emp,sptr->salary);
}
	
