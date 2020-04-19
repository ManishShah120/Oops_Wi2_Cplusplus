#include<iostream>
using namespace std;

class integer
{
	int m, n;
	public:
		integer(int, int);	//Constructor Declared
		
		void display(void)
		{
			cout<< "m = "<< m <<"\n";
			cout<< "n = "<< n <<"\n";
		}
};

integer :: integer(int x, int y){m = x;n = y;}

int main()
{
	integer int1(0, 100);	//Constructor called implicilty
	integer int2 = integer(25, 75);	//constructor called explicitly
	
	cout << "\nOBJECT1" << "\n";
	int1.display();
	
	cout<<"\nOBJECT2" << "\n";
	int2.display();
	
	return 0;
}
