#include<iostream>
using namespace std;

//It is invoked by default whenever object is created
//it is called at last after object is destroyed
class bua
{
	public :
//	bua()
//	{
//		cout<<"Bua Ka Ladka"<<endl;
//	}
	bua(int a)
	{
		cout<<"Bua Ka Ladka "<<a<<endl;
	}
	
	~bua()
	{
		cout<<"Bua Ka Ladka chala gaya"<<endl;
	}
	
	void fun1()
	{
		cout<<"function 1"<<endl;
	}
	void fun2()
	{
		cout<<"function 2"<<endl;
	}
	void fun3()
	{
		cout<<"function 3"<<endl;
	}
};


main()
{
//	bua b;
	bua b(395+25);
	b.fun1();
	b.fun2();
	b.fun3();
	
}