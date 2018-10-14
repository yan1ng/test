#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int m;
	cin>>a>>b>>c;
	(a>b)?(m=a):(m=b);
	(m>c)?(m=m):(m=c);
	cout<<m<<endl;
	system("pause");
	return 0;
}
