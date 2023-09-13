#include<stdio.h>


cube()
{
	printf("Enter A: ");
	int a;
	scanf("%d",&a);
	printf("%d \n",a*a*a);
}

square(int a)
{
	printf("Square is : %d ",a*a);
}


main()
{
	//2 types of function
		//1 user defined
		//2 system defined
			//A) With Parameter
			//B) Without Parameter
			
	cube();
	int b;
	printf("Enter value to find square ");
	scanf("%d",&b);
	square(b);
}