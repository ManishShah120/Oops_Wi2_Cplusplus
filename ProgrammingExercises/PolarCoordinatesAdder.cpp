#include<iostream>
#include<math.h>
using namespace std;

class Polar {
	float r;
	float theta;
public:
	Polar() {}
	Polar(float x, float y) {r = x; theta = y;}
	Polar operator +(Polar);
	void display(void);
};


Polar Polar :: operator +(Polar args) {
	Polar temp;
	float previosX = r * cos(theta);
	float previosY = r * sin(theta);
	
	float argsX = args.r * cos(args.theta);
	float argsY = args.r * sin(args.theta);
	
	float tempX = previosX + argsX;
	float tempY = previosY + argsY;
	
	temp.theta = tan(tempY/tempX);
	temp.r = sqrt(tempX*tempX + tempY*tempY);
	
	return(temp);
}

void Polar :: display(void) {
	cout<<"Point("<<r<<","<<theta<<")\n";
}

int main() {
	Polar test0,test1;
	test0 = Polar(5,30);test0.display();
	test1 = Polar(5,30);test1.display();
	
	Polar ans;
	ans = test0 + test1;
	ans.display();

	return 0;
}
