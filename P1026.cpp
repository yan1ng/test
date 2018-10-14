#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,b;
	double i,j,a;
	double sum=0;
	int num=0;
	cin>>n;
	for(i=2,j=1;num<n;num++)
	{
		a=i/j;
		sum=sum+a;
		b=i;
		i=i+j;
		j=b;
	}
	cout<<setiosflags(ios::fixed)<<setprecision(5)<<sum<<endl;
	system("pause");
	return 0;
}