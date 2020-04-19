#include<iostream>
using namespace std;

int count = 0;

class alpha
{
	public:
		alpha()
		{
			count++;
			cout<<"\nNo. of Objects Created "<< count;
		}
		
		~alpha()
		{
			cout<<"\nNo. of Objects destroyed "<<count;
			count--;
		}
};

int main()
{
	cout<<"\n\nEnter Main\n";
	alpha A1, A2, A3, A4;
	
	cout<<"\n\nEnter Block1\n";
	alpha A5;

	cout<<"\n\nEnter Block2\n";
	alpha A6;

	cout<<"\n\nRe-Enter Main\n";
		
	return 0;
}
