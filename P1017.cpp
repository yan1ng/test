#include<iostream>
using namespace std;
int main()
{
	int y,m,a;
	cin>>y>>m;
	a=y% 4;
	switch(m)
	{
	    case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: cout<<31<<endl;break;
	}
	switch(m)
	{
	    case 4:
		case 6:
		case 9:
		case 11: cout<<30<<endl;break;
	}
    switch(m)
	{
	    case 2:
	    switch(a)
		{
	        case 0: cout<<29<<endl;break;
			case 1: 
		    case 2:	
		    case 3: cout<<28<<endl;break;
		}
	}
	system("pause");
	return 0;
}