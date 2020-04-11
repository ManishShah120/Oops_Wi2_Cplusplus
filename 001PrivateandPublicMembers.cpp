#include<iostream>
using namespace std;

class xyz
{
	int x;
	int y;
	public:
		int z;
};

int main()
{
	xyz p;
	p.x = 9;	//This will give you an error 
	p.z = 21;	//This will not because z in public and x is private
	return 0;
}
