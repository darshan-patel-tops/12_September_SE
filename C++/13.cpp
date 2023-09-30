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


class papa : virtual public dada
{
	public :
		void house()
		{
			cout<<"house"<<endl;
		}
};

class kaka :virtual public dada
{
	public :
		void car()
		{
			cout<<"Car"<<endl;
		}
};


class beta :public kaka,public papa
{

	public :
	void bike()
	{
		cout<<"bike"<<endl;
		}	
};

main()
{
	beta b;
	b.bike();
	b.car();
	b.house();
	b.zameen();
}



