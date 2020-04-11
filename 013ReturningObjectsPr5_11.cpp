#include<iostream>
using namespace std;

class complex
{
	float x;
	float y;
	
	public:
		void input(float real, float imag){x = real;y = imag;}
		friend complex sum(complex, complex);
		void show(complex);	
};

complex sum(complex c1, complex c2)
{
	complex c3;	//Object c3 is created
	c3.x = c1.x + c2.x;
	c3.y = c1.y + c2.y;
	return(c3);	//returns object c3 
}

void complex :: show(complex c)
{
	cout<<c.x<<" +j"<<c.y<<"\n";
}

int main()
{
	complex A, B, C;
	A.input(3.1, 5.65);
	B.input(2.75, 1.2);
	
	C = sum(A, B);	//C = A + B
	
	cout<< "A = ";A.show(A);
	cout<< "B = ";B.show(B);
	cout<< "C = ";C.show(C);
	
	return 0;
}
