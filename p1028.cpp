#include<iostream>
using namespace std;
int main()
{
	int n;
	int a,b,c;
	for(n=100;n<=999;n++)
	{
		a=n/100;
	    b=n/10-10*a;
		c=n-100*a-10*b;
		if(n==a*a*a+b*b*b+c*c*c)
		{
			cout<<n<<' ';
		}
	}
	system("pause");
	return 0;
}
