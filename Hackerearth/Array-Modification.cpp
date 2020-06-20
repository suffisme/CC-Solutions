
#include<bits/stdc++.h>
#define ll long long
#define test ll t;cin>>t;while(t--)
ll mod = 1000000007;

using namespace std;

int main()
{
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	ll n,s=0;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	ll neg = 0;
	while(a[neg]<0)
	neg++;
	if(neg<=1)
	{
		for(int i=0;i<neg;i++)
		s = (s+((a[i]%mod)*(a[neg]%mod))%mod)%mod;
	}
	else{
		s = (s + ((a[0]%mod)*(a[1]%mod))%mod)%mod;
		for(int i=1;i<neg;i++)
		s = (s + ((a[0]%mod)*(a[i]%mod))%mod)%mod;
	}
	if(neg<n)
	{
	for(ll i=neg;i<n-1;i++)
	s = (s+((a[i]%mod)*(a[n-1]%mod))%mod)%mod;
	s = (s+((a[n-2]%mod)*(a[n-1]%mod))%mod)%mod;
	}
	if (n==1)
	s = a[0];
	cout<<s;	
}
