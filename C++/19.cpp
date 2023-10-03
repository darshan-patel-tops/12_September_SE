#include<iostream>
using namespace std;


//You cannot create object of virtual or abstract class
//  You must inherit that class
// You don't create body for abstract function

class rbi
{
	public :
		virtual void interest(int a);
//		virtual void interest()
//		{
//			cout<<"Give minimum 2% interest"<<endl;
//		}
//		virtual void deposit();
//		virtual withdraw();
};

class spbank : public rbi
{
	public:
			void sms()
			{
				cout<<"SMS Charge"<<endl;
			}
			void interest(int a)
			{
				cout<<"150 Rupya Dega"<<a<<endl;
			}
			
};



main()
{

	spbank s;
	s.sms();
	s.interest(50);
	
	
}