#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int a[100]={0};
	cin>>n;
	a[0]=0;
	a[1]=1;
	a[2]=1;
	for(i=0;i<=n-1;i++)
	{
		a[i+3]=a[i]+a[i+1]+a[i+2];
	}
	for(i=0;i<=n-2;i++)
	{
		cout<<a[i]<<',';
	}
	cout<<a[n-1]<<endl;
	system("pause");
	return 0;
}