#include<iostream>
using namespace std;


class papa
{
	public :
		void zameen()
		{
			cout<<"Zameen"<<endl;
		}
		void home()
		{
			cout<<"home"<<endl;
		}
};

class kaka
{
	public :
		void zameen()
		{
			cout<<"Zameen"<<endl;
		}
		void car()
		{
			cout<<"Car"<<endl;
		}
};


class beta : public papa,public kaka
{
	public :
		void bike()
		{
//		papa::zameen();
			cout<<"Bike"<<endl;
		}
//		void zameen()
//		{
//			cout<<"Bete ki zameen"<<endl;
//		}
};


main()
{
	beta b;
	b.bike();
	b.car();
	b.home();
	b.zameen();
}
