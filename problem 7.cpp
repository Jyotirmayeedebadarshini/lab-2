#include <iostream>
using namespace std;

int main() {
	float a,b,c;
	cout<<"enter first angle of the triangle:";
	cin>>a;
	cout<<"enter second angle of the triangle:";
	cin>>b;
	c=180-(a+b); 
	cout<<"the third angle of the triangle is:"<<c;
	return 0;
}
