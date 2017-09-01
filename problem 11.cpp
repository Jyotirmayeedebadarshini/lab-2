#include <iostream>
using namespace std;

int main()
{
	float i,p,t,r;
	cout<<"enter the principal value:";
	cin>>p;
	cout<<"enter the rate:";
	cin>>r;
	cout<<"enter the time period:";
	cin>>t;
	i=(p*t*r)/100;
	cout<<"the simple interest is:"<<i;
	return 0;
}
