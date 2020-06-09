#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long a=0,b=0,m;
		if(n==2)
		cout<<"2\n";
		else{
			m = 2;
			for(int i=1;i<n/2;i++)
			{
				a += m;
				m *= 2;	
			}
			for(int i=n/2+1;i<n;i++)
			{
				b += m;
				m *= 2;
			}
			a = a + m;
			cout<<a-b<<"\n"; 
		}
	}
}
