#include<iostream>
using namespace std;


class a
{
	public :
//	a()
//	{
//			cout<<"Called Class A"<<endl;	
//	}

	classa(int a)
	{
			cout<<"Called Class A "<<a<<endl;		
	}	
};




class b : public a
{
	public :
//		b()
//		{
//			cout<<"Called Class B"<<endl;
//		}
	classa()
	{
//		using a->classa;
//		a::classa(int a);
			cout<<"Called Class B"<<endl;		
	}	
};


main()
{
	b b;
	b.classa(5);
}