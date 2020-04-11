#include<iostream>
using namespace std;

class item
{
	private:
		static int count;	//Static Class variable
		int number;

	public:
		void getdata(int a)
		{
			number = a;
			count++;
		}
		
		void getcount(void)
		{
			cout<<"count: ";
			cout<<count<<"\n";
		}
};

int item :: count;	//Definition of static data member
//int item :: count = 10; //Is also correct


int main()
{
	item a, b, c;
	a.getcount();	//count is initialized to zero
	b.getcount();
	c.getcount();
	
	a.getdata(100);	//getting data into object a
	b.getdata(200);	//getting data into object b
	c.getdata(300);	//getting data into object c
	
	cout<<"After reading data"<<"\n";
	
	a.getcount();	//Display
	b.getcount();
	c.getcount();
	
	cout<<"Objects Created: ";
	c.getcount();
	
	return 0;
}
