#include<iostream>
using namespace std;

class student
{
		public :
//				float total;
//				float marks;
				
				void input(int a)
				{
					int i=0;
					float total[a] ;
					float marks[a][5];
					for(i=0;i<5;i++)
					{
						cout<<"Enter Your Marks "<<endl;
						cin>>marks[a][i];
						total[a] = total[a]+marks[a][i];
					cout<<"Your Total Marks Are: "<<total[a]<<endl;
					}
				}
};


main()
{
	int a;
	cout<<"Enter Total Students"<<endl;
	cin>>a;
	student s[a];
	
	int i=0;
		for(i=0;i<a;i++)
		{
			s[i].input(i);
		}
		
//	s.input();
}