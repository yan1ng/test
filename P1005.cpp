#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char a;
	while(cin>>a)
	{
		if(isalpha(a))
		{
			cout<<(int)a<<endl;
		}
	}
	system("pause");
	return 0;
}