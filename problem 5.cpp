#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float x,y,p;
	cout<< "enter a number raised to the power:";
	cin>>x;
	cout<<"enter the exponent:";
	cin>>y;
	p=pow(x,y);
	cout<<"the power of any number x to y is:"<< p;
	return 0;
}
