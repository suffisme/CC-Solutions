#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		long a,b,c,d;
		cin>>a>>b>>c>>d;
		if(b>=a)
		cout<<b<<"\n";
		else{
			if(d>=c)
			cout<<"-1\n";
			else{
				cout<<(long long)b + (long long)ceil((double)(a-b)/(c-d))*c<<"\n";
			}
		}
	}
}
