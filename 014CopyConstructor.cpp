#include<iostream.h>
#include<conio.h>

class code
{
	int id;
	public:
		code(){}
		code(int a){id = a;}
		code(code & x){id = x.id;}
		void display(void){cout<<id;}
};

int main()
{
	code A(100);
	code B(A);
	code C = A;
	code D;
	D = A;
	cout<<"\n id
	A.display();
	cout<<"\n id
	B.display();
	cout<<"\n id
	C.display();
	cout<<"\n id
	D.display();
	of A:";
	of B:";
	of C:";
	of D:";
	return 0;
}
