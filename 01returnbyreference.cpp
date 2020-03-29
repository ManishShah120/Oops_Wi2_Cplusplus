//Return by Reference
//A function can also return a reference
#include<iostream>
using namespace std;
int& max(int &x,int &y)
{
	if(x>y)
		return x;
	else
		return y;
}
int main()
{
	cout<<max(21,12);
	return 0;
}
