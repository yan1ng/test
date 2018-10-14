#include<iostream>
#include<iomanip>
using namespace std;
#define pi 3.1415926
int main()
{
	float r,l;
	cin>>r;
	l=2*pi*r;
	cout<<setiosflags(ios::fixed)<<setprecision(5)<<l<<endl;
	system("pause");
	return 0;
}
