#include<iostream>
using namespace std;
int main()
{
	int a[10]={0};
	int h,h1,h2,i;
	int sum=0;
	for(i=0;i<=9;i++)
	{
		cin>>a[i];
	}
	cin>>h1;
	h2=30;
	h=h1+h2;
	for(i=0;i<=9;i++)
	{
		if(h>=a[i])
		    sum=sum+1;
	}
	cout<<sum<<endl;
	system("pause");
	return 0;
}