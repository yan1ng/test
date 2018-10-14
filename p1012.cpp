#include<iostream>
using namespace std;
int main()
{
	float x,y;
	cin>>x;
	if(x<1)
	{
		y=x;
	}
	else if(x>=1 && x<=10)
	{
		y=2*x-1;
	}
	else
	{
		y=3*x-11;
	}
	cout<<y<<endl;
	system("pause");
	return 0;
}