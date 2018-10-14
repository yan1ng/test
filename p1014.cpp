#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a;
	float m;
	cin>>a;
	if(a<=50)
	{
		m=0.5*a;
	}
	else if(a<=100)
	{
		m=25+0.7*(a-50);
	}
	else
	{
		m=60+1*(a-100);
	}
	cout<<setiosflags(ios::fixed)<<setprecision(1)<<m<<endl;
	system("pause");
    return 0;
}