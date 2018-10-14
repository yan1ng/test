#include<iostream>
using namespace std;
int main()
{
	int a[100][100]={0};
	int n,m;
	int i,j;
	int s[100]={0};
	cin>>n>>m;
	for(i=0;i<=n-1;i++)
		for(j=0;j<=m-1;j++)
			cin>>a[i][j];
	for(j=0;j<=m-1;j++)
	{
		for(i=0;i<=n-1;i++)
		{
		    s[j]+=a[i][j];
		}
	}
	for(j=0;j<=m-1;j++)
		cout<<s[j]<<' ';
	system("pause");
	return 0;
}
