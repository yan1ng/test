#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int x;
	float a,k;
	cin>>x;
	a=abs(x);
	k=exp(a);
	cout<<setiosflags(ios::fixed)<<setprecision(5)<<k<<endl;
	system("pause");
	return 0;
}
