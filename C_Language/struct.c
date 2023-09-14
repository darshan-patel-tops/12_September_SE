#include<stdio.h>


union u1
{
	int age[25];
	char name[100];
	float salary;	
};

struct s1
{
	int age[25];
	char name[100];
	float salary;	
};



main()
{
	union u1 check1;
	struct s1 check2;
	printf("Size of Union is %d \n",sizeof(check1));
	printf("Size of Structure is %d ",sizeof(check2));
}