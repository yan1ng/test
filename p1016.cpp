#include<iostream>
using namespace std;
int main()
{
	float x,y;
	cin>>x;
	(x<1 || x>10)?(y=x-1):(y=x+2);
	cout<<y<<endl;
	system("pause");
	return 0;
}