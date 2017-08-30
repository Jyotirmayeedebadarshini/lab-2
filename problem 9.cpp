#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
	float a,A;
	cout<<"enter the side of the triangle:";
	cin>>a;
	A=sqrt(3)/4*(a*a);
	cout<<"the area of the equilateral triangle is:"<<A;
	return 0;
}
