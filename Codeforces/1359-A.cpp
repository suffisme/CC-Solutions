#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		int p = n/k;
		if (m==0 || n==m || (n==k && m>1))
		cout<<"0\n";
		else{
			if(p>=m)
			cout<<m<<"\n";
			else{
				int l = 0;
				if((m - p)%(k-1))
				l = 1;
				cout<<p - (m-p)/(k-1) - l<<"\n";
			}
		}		
	}	
}
