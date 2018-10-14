#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int x=1;
	int sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    x=x*i;
		sum=sum+x;
	}
	cout<<sum<<endl;
	system("pause");
	return 0;
}
