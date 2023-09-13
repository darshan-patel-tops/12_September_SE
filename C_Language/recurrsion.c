#include<stdio.h>


int check(int a)
{
	if(a>0)
	{
		
	printf("%d \n",a);
	a--;
	check(a);
	}
	else
	{
		printf("Recurssion Complete");
	}
}

main()
{
	int a;
	scanf("%d",&a);
	check(a);
	
//	for(int a=500;a>=1;a--)
//	{	
//		printf("hello %d\n",a);
//	}

	
}