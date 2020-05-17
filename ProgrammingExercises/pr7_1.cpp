#include<iostream>
using namespace std;

class FLOAT {
	float dota;
public:
	FLOAT() {}
	FLOAT (float x) {dota = x;}
	FLOAT operator +(FLOAT);
	FLOAT operator -(FLOAT);
	FLOAT operator *(FLOAT);
	FLOAT operator /(FLOAT);
	void display(void);
};

void FLOAT :: display(void) {
	cout<<dota<<"\n";
}

FLOAT FLOAT :: operator +(FLOAT args) {
	FLOAT temp;
	temp.dota = dota + args.dota;
	return(temp);
}

FLOAT FLOAT :: operator -(FLOAT args) {
	FLOAT temp;
	temp.dota = dota - args.dota;
	return(temp);
}

FLOAT FLOAT :: operator *(FLOAT args) {
	FLOAT temp;
	temp.dota = dota * args.dota;
	return(temp);
}

FLOAT FLOAT :: operator /(FLOAT args) {
	FLOAT temp;
	temp.dota = dota / args.dota;
	return(temp);
}

int main() {
	FLOAT obj1, obj2;
	obj1 = FLOAT(6);
	obj2 = FLOAT(2);
	
	FLOAT objsum;
	objsum = obj1 + obj2;
	cout<<"SUM: ";
	objsum.display();
	
	FLOAT objsub;
	objsum = obj1 - obj2;
	cout<<"SUB: ";
	objsum.display();
	
	FLOAT objmul;
	objsum = obj1 * obj2;
	cout<<"MUL: ";
	objsum.display();
	
	FLOAT objdiv;
	objsum = obj1 / obj2;
	cout<<"DIV: ";
	objsum.display();
	
	return 0;
}
