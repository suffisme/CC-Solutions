#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int a,b,x,y;
		cin>>a>>b>>x>>y;
		long area;
		area=x*b;
		if(area<a*y)
		area=a*y;
		if(area<a*(b-1-y))
		area=a*(b-1-y);
		if(area<b*(a-1-x))
		area=b*(a-1-x);
		cout<<area<<endl;
		
		t--;
	}
}