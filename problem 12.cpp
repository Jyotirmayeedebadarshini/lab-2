#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float p,t,r,i;
	cout<<"enter principal value:";
	cin>>p;
	cout<<"enter the rate:";
	cin>>r;
	cout<<"enter the time period:";
	cin>>t;
	i=pow(p*(100+r)/100,t);
	cout<<"the compound interst is:"<<i;
	return 0;
}
