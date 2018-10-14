#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int a[100]={0};
	a[0]=0;
	a[1]=1;
    for(i=2;i<=n-1;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(i=0;i<=n-2;i++)
	{
		cout<<a[i]<<",";
	}
	cout<<a[n-1]<<endl;
	system("pause");
	return 0;
}
