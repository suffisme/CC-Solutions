#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,min=1001;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++)
			cin>>s[i];
		sort(s,s+n);
		for(int i=1;i<n;i++)
		{
			if(min>s[i]-s[i-1])
			min = s[i]-s[i-1];
		}
		cout<<min<<"\n";
	}
}
