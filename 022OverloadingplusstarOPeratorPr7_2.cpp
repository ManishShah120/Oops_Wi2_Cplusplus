#include<iostream>
using namespace std;

class complex
{
	private:
		float x;	//real part
		float y;	//imaginary part
	public:
		complex(){}					//constructor 1
		complex(float real, float imag)	//constructor 2
		{x = real; y = imag;}
		complex operator + (complex);
		complex operator * (complex);
		void display(void);
};

complex complex :: operator + (complex c)
{
	complex temp;		//temporary
	temp.x = x + c.x;	//these are
	temp.y = y + c.y;	//float additions
	return(temp);
}

complex complex :: operator * (complex c)
{
	complex temp;		//temporary
	//(a+ib)(c+id) = (ac - bd) + i(ad + bc)
	temp.x = (x * c.x ) - (y * c.y);
	temp.y = (x * c.y ) + (y * c.x);
	return(temp);
}

void complex :: display(void)
{
	cout<<x<<" + J"<< y << "\n";
}

int main()
{
	complex C1, C2, C3, C4;	//invokes constructor 1
	//C1 = complex(2.5, 3.5);	//invokes constructor 2
	C1 = complex(1, 2);
	//C2 = complex(1.6, 2.7);
	C2 = complex(3, 4);

	C3 = C1 + C2;
	C4 = C1 * C2;

	cout<< "C1 = ";C1.display();
	cout<< "C2 = ";C2.display();
	cout<<"Sum: ";
	cout<< "C3 = ";C3.display();
	cout<<"Mul: ";
	cout<< "C4 = ";C4.display();

	return 0;
}
