#include<iostream>
using namespace std;
int main()
{
	int a[100]={0};
	int n,i,max,k;
	cin>>n;
	for(i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for(i=0;i<=n-1;i++)
	{
		if(max<=a[i])
		{
			max=a[i];
			k=i+1;
		}
	}
	cout<<max<<' '<<k<<endl;
	system("pause");
	return 0;
}
