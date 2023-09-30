#include<iostream>
using namespace std;



class bjp
{
	public :
		void modi()
		{
			cout<<"Modi"<<endl;
		}
		
		void amit()
		{
			cout<<"Amit"<<endl;
		}
	protected :
		void arvind()
		{
			cout<<"Arvind"<<endl;
			this->hardik();
			this->oveshi();
		}
	private :
		void hardik()
		{
			cout<<"Hardik"<<endl;
		}
		void oveshi()
		{
			cout<<"Oveshi"<<endl;
		}
};


class congress : public bjp
{
	public :
		void rahul()
		{
			cout<<"Rahul"<<endl;
			this->arvind();	
//			this->hardik();
		}
		
		
};

main()
{
	congress c;
	c.amit();
	c.modi();
	c.rahul();
	
}