#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a,h;
	float s;
	cin>>a>>h;
	s=a*h/2;
	cout<<setiosflags(ios::fixed)<<setprecision(5)<<s<<endl;
	system("pause");
	return 0;
}
