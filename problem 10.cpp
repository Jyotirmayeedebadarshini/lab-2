#include <iostream>
using namespace std;
 
int main() {
	float a,b,c,d,e,total,avg,percentage;
	cout<<"enter marks of first subject:";
	cin>>a;
	cout<<"enter marks of second subject:";
	cin>>b;
	cout<<"enter marks of third subject:";
	cin>>c;
	cout<<"enter marks of fourth subject:";
	cin>>d;
	cout<<"enter marks of fifth subject:";
	cin>>e;
	total=a+b+c+d+e;
	cout<<"total marks of five subject is:"<<total;
	avg=(a+b+c+d+e)/5;
	cout<<"average mark is:"<<avg;
	percentage=(a+b+c+d+e)/500*100;
	cout<<"total percentage is:"<<percentage;
	return 0;
}
