#include<iostream>
using namespace std;


class dada
{
	public :
		void zameen()
		{
			cout<<"Zameen of dada"<<endl;
		}	
};

class papa : public dada
{
	public :
		void home()
		{
			cout<<"Home"<<endl;
		}
		void zameen()
		{
			cout<<"Zameen of papa"<<endl;
		}
};


class beta : public papa
{
		public :
			void car()
			{
				cout<<"Car"<<endl;
			}
			void zameen()
			{
				//Class name :: Scope Resolution Function Name
				dada::zameen();
				papa::zameen();
				cout<<"Zameen of beta"<<endl;
			}
};



main()
{
	beta b;
	b.car();
	b.home();
	b.zameen();
					// dada::zameen();

}