#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
	float d,x1,x2;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	x1=(-b-sqrt(d))/a/2;
	x2=(-b+sqrt(d))/a/2;
	if(d<0)
	{
		cout<<"No solution"<<endl;
	}
	else
	{
		cout<<setiosflags(ios::fixed)<<setprecision(5)<<x1<<' '<<x2<<endl;
	}
	system("pause");
	return 0;
}
