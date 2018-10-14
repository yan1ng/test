#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int s,v;
	cin>>a>>b>>c;
	v=a*b*c;
	s=2*(a*b+a*c+b*c);
	cout<<s<<' '<<v<<endl;
	system("pause");
	return 0;
}