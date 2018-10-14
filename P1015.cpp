#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double r,h,x,y,a,H;
	cin>>r>>h>>x>>y;
	a=x*x+y*y;
	if(a>=r*r)
	    cout<<0<<endl;
	else
	{
		H=sqrt(a);
	    cout<<setiosflags(ios::fixed)<<setprecision(5)<<H<<endl;
	}
    system("pause");
	return 0;
}