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
	void car()
	{
		cout<<"Car"<<endl;	
	}	
};


main()
{
	papa p;
	p.car();
	p.zameen();
}