#include<iostream>
using namespace std;

class space
{
	private:
		int x;
		int y;
		int z;
	public:
		void getdata(int a, int b, int c);
		void display(void);
		void operator-();	//Overload Unary Minus
};

void space :: getdata(int a, int b,int c)
{
	x = a;
	y = b;
	z = c;
}

void space :: display(void)
{
	cout<<x<<" ";
	cout<<y<<" ";
	cout<<z<<"\n";
}

void space :: operator-()
{
	x = -x;
	y = -y;
	z = -z;
}

int main()
{
	space S;
	S.getdata(10, 20, -30);
	cout<<"S : ";
	S.display();
	-S;		//activities operator-() functoin
	cout<<"S :";
	S.display();
	
	return 0;
}
