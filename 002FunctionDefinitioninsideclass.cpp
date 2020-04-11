#include<iostream>
using namespace std;


//Defining the function inside the class definition
class item
{
	private:
		int number;
		float cost;
	public:
		void getdata(int a, float b)
		{
			number = a;
			cost = b;
		}
		
		void putdata(void)
		{
			cout<<"Number: "<<number<<"\n";
			cout<<"Cost: "<<cost<<"\n";
		}
}

int main()
{
	item x;
	x.getdata(21,52.2);
	x.putdata();	
	return 0;
}
