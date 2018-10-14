#include<iostream>
using namespace std;
int main()
{
	int n;
	double sum=0;
	int k=0;
	cin>>n;
	while(sum<=n)
	{
		k=k+1;
		sum=sum+1.0/k;
	}
	cout<<k<<endl;
	system("pause");
	return 0;
}