#include<iostream>
using namespace std;

const int m = 50;

class ITEMS
{
	int itemCode[m];
	float itemPrice[m];
	int count;
	public:
		void CNT(void){count = 0;}	//Initializes count = 0
		void getitem(void);
		void displaySum(void);
		void remove(void);
		void displayItems(void);
};

//Function definitions
void ITEMS :: getitem(void)
{
	cout<<"Enter Item Code: ";
	cin>>itemCode[count];
	cout<<"Enter Item Cost: ";
	cin>>itemPrice[count];
	count++;
}

void ITEMS :: displaySum(void)
{
	float sum = 0;
	for(int i=0;i<count;i++)
		sum = sum + itemPrice[i];
	cout<<"\nTotal value: "<<sum<<endl;
}

void ITEMS :: remove(void)	//Delete a specific item
{
	int a;
	cout<<"Enter item Code: ";
	cin>>a;
	for(int i=0;i<count;i++)
		if(itemCode[i] == a)
			itemPrice[i] = 0;
}

void ITEMS :: displayItems(void)	//displaying items
{
	cout<<"\nCode\tPrice\n";
	for(int i=0;i<count;i++)
	{
		cout<<itemCode[i]<<"\t"<<itemPrice[i]<<"\n";
	}
	cout<<"\n";
}

//Driver Program
int main()
{
	ITEMS order;
	order.CNT();
	int x;
	do	//do....while loop
	{
		cout<<"\nYou can do the following : "<<"Enter appropriate number \n";
		cout<<"\n1. Add an item ";
		cout<<"\n2. Display total value ";
		cout<<"\n3. Delete an item ";
		cout<<"\n4. Dispaly all item ";
		cout<<"\n5. Quit ";
		cout<<"\nWhat is your Options: ";
		cin>>x;
		
		switch(x)
		{
			case 1:
				order.getitem();
				break;
			case 2:
				order.displaySum();
				break;
			case 3:
				order.remove();
				break;
			case 4:
				order.displayItems();
				break;
			case 5:
				break;
			default :
				cout<<"Error in input; try again\n";
		}
	}
	while(x != 5);	//do...while ends

	return 0;
}
