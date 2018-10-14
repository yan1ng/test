#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,a,i;
	double j,x,s,y;
	s=0;y=0;
	cin>>a>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			x=a*pow(10,j-1);
			y=y+x;
		}
	}
	s=s+y;
	cout<<s<<endl;
	system("pause");
	return 0;
}