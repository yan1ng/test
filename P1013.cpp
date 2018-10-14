#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c;
	cin>>n;
	if(n>=1 && n<10)
	{
		cout<<n<<endl;
	}
	else if(n<100)
	{
		a=n/10;
		b=n-10*a;
		cout<<b<<a<<endl;
	}
	else
	{
		a=n/100;
		b=n/10-10*a;
		c=n-100*a-10*b;
		cout<<c<<b<<a<<endl;
	}
	system("pause");
	return 0;
}