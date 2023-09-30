#include<iostream>
using namespace std;


class a
{
		public :
		void water()
		{
			cout<<"Water"<<endl;	
		}	
		protected :
			void juice()
			{
				cout<<"Juice"<<endl;
			}
			private :
				void blackwater()
				{
					cout<<"BlackWater"<<endl;
				}
};


class b : public a
{
//	a::juice();
	public :
//	 b()
//	 {
//	 	
//		this->juice();
//	 }
		void fun1()
		{
			juice();
		}
};



main()
{
	b b;
	b.water();
//	b.juice();
	b.fun1();
//	b.blackwater();
}