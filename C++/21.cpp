#include<iostream>

using namespace std;

int number1 = 60;
int number2 = 70;

//public :
int addition(float num1,float num2)
{
	float number1,number2;
	
	number1 = num1;
	number2 = num2;
	
	return number1+number2;
}





main()
{
	float a,b;
	cout<<"Enter 2 Numbers : "<<endl;
	cin>>a>>b;
	cout<<addition(a,b)<<endl;
}