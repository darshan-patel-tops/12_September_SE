#include<iostream>
using namespace std;

class mobile
{
	//iT consists of data member and member function only
	
	// Access Modifier
//	public -------  it is like water    cycle
// 	protected ----	it is like juice	bike/car
//  private ------	it is like black water / wine / beer	rolls royce

	public :
	int a=1;
	void call()
	{
		cout<<"call"<<endl;
	}
};

main()
{
	//object is an instance of class
	mobile m;
	cout<<m.a<<endl;
	m.call();
	
}