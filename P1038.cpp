#include<iostream>
using namespace std;
int main()
{
	int a[100]={0};
	int n,m,i,j,k;
	cin>>n;
	for(i=0;i<=n-1;i++)
		cin>>a[i];
	cin>>m;
	for(i=0;i<=n-1;i++)
	{
		if(m>=a[i] && m<=a[i+1])
		    k=i;
	}
	for(j=0;j<=k;j++)
		cout<<a[j]<<' ';
	cout<<m<<' ';
	for(j=k+1;j<=n-1;j++)
		cout<<a[j]<<' ';
    system("pause");
	return 0;
}