
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,c;
	int l;
	float p,s;
	cin>>a>>b>>c;
	l=a+b+c;
	p=l/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<setiosflags(ios::fixed)<<setprecision(5)<<s<<' ';
	cout<<setiosflags(ios::fixed)<<setprecision(0)<<l<<endl;
	system("pause");
	return 0;
}