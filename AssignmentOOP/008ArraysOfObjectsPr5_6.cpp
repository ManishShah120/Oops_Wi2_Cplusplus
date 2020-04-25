#include<iostream>
using namespace std;

//Defining class
class employee
{
	private:
		char name[30];	//String as class member
		float age;
	public:
		void getdata(void);
		void putdata(void);
};

//Defining member functions
void employee :: getdata(void)
{
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter age: ";
	cin>>age;
}

void employee :: putdata(void)
{
	cout<<"Name: "<<name<<"\n";
	cout<<"Age: "<<age<<"\n";	
}


//Driver Program
const int size=3;
int main()
{
	employee manager[size];
	for(int i=0;i<size;i++)
	{
		cout<<"\nDetails of manager"<<i+1<<endl;
		manager[i].getdata();
	}
	cout<<"\n";
	for(int i = 0;i<size;i++)
	{
		cout<<"\nmanager"<<i+1<<"\n";
		manager[i].putdata();
	}
	return 0;
}
