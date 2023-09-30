#include<iostream>
using namespace std;


class calc
{
	public :
		
		void add(int a,int b)
		{
			cout<<a+b<<endl;
		}
		void add(int a,int b,int c)
		{
			cout<<a+b+c<<endl;	
		}	
};

main()
{
	calc c;
	c.add(1,5,45);
	
}