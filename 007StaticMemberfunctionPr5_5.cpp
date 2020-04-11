#include<iostream>
using namespace std;

class test
{
	private:
		int code;
		static int count;	//Static member variable or class variable
	public:
		void setcode(void){code = ++count;}
		void showcode(void){cout<<"Object number: "<<code<<"\n";}
		static void showcount(void){cout<<"count: "<<count<<"\n";}
};

int test :: count;

int main()
{
	test t1,t2;
	
	t1.setcode();
	t2.setcode();
	
	test :: showcount();	//accessing static function Without using dot operator static member function can be called 
	
	test t3;
	t3.setcode();
	
	test :: showcount();
	
	t1.showcode();
	t2.showcode();
	t3.showcode();
	
	return 0;
}
