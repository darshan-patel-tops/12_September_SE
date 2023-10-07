#include<iostream>
using namespace std;



main()
{
	
	int a =5;
	int b= 10;
	
	cout<<"Value of A is : "<<a<<" Value of B is : "<<b<<" Before Swapping"<<endl;
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	cout<<"Value of A is : "<<a<<" Value of B is : "<<b<<" After Swapping"<<endl;
}