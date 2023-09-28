#include<iostream>
using namespace std;




	class dada {
		public :
			void zameen()
			{
				cout<<"zameen"<<endl;
				}	
	};
	
	
	class papa : public dada
	{
		public :	
	};
	
	
	main()
	{
		papa p;
		p.zameen();
	}