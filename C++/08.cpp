#include<iostream>
using namespace std;

class petrolcar
{
	public :
		void seat()
		{
			cout<<"Seat"<<endl;
			}	
			void tyre()
			{
				cout<<"tyre"<<endl;
			}
			void body()
			{
				cout<<"body"<<endl;
			}
			void engine()
			{
				cout<<"engine"<<endl;
			}
};



class evcar : public petrolcar
{
	public :
		void battery()
		{
			cout<<"battery"<<endl;
			}	
};


main()
{
	evcar e;
	e.battery();
	e.body();
	e.engine();
	e.seat();
	e.tyre();
}