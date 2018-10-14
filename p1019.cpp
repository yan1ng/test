#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,n,m;
	cin>>n;
	m=floor(sqrt(double(n)));
	for(i=2;i<=m;i++)
		if(n% i ==0)
			break;
	if(i>=m+1)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	system("pause");
	return 0;
}
