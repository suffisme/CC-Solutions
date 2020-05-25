#include<iostream>

using namespace std;

int main()
{
	long long n,m,s=0;
	cin>>n>>m;
	long a[m];
	a[0]=1;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
		if(a[i]>=a[i-1])
		s=s+(a[i]-a[i-1]);
		else
		{
			s=s+n+a[i]-a[i-1];
		}
	}
	cout<<s;
}