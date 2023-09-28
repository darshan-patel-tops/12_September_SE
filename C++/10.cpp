#include<iostream>
using namespace std;


class dada
{
	public :
		void zameen()
		{
			cout<<"Zameen"<<endl;
		}	
};

class papa : public dada
{
	public :
		void house()
		{
			cout<<"Home"<<endl;
		}
};
class kaka : public dada
{
	public :
		void car()
		{
			cout<<"Car"<<endl;
		}
};
class chacha : public dada
{
	public :
		void bike()
		{
			cout<<"Bike"<<endl;
		}
};


main()
{
	papa p;
	kaka k;
	chacha c;
	c.zameen();
	k.zameen();
	p.zameen();
}