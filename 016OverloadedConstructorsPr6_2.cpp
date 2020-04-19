#include <iostream>
using namespace std;

class complex
{
	private:
		float x,y;
	public:
		complex(){}	//Constructor no arg

		complex(float a)	//constructor one-argv
		{
			x = y = a;
		}

		complex(float real, float imag)	//constructor-two argv
		{
			x = real;
			y = imag;
		}

		friend complex sum(complex, complex);
		friend void show(complex);
};

complex sum(complex c1, complex c2)	//friend
{
	complex c3;
	c3.x = c1.x + c2.x;
	c3.y = c1.y + c2.y;
	return c3;
}

void show(complex c)	//friend
{
	cout<< c.x << "+ j"<< c.y<<endl;
}

int main()
{
	complex A(2.7, 3.5);	//define & initialize
	complex B(1.6);		//define & initialize
	complex C;			//define

	C = sum(A,B);			//sum() is a friend[Friend function basically takes object as an argument and can acces private data memeber of a class]
	cout << "A = ";show(A);	//show() is a friend
	cout << "B = ";show(B);
	cout << "C = ";show(C);

	//Another way to give initial values (second method)
	complex P,Q,R;			//define p, Q and R
	P = complex(2.5, 3.9);
	Q = complex(1.6, 2.5);
	R = sum(P, Q);

	cout<<"\n";
	cout << "P = ";show(P);	//show() is a friend
	cout << "Q = ";show(Q);
	cout << "R = ";show(R);

	return 0;
}
