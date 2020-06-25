#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t; cin>>t;
	while(t--)
	{
		ll n,x; cin>>n;
		vector <ll> v;  
		vector <ll> :: iterator it;
    	for (ll i = 0; i < n; i++) 
       	{ 
			cin>>x;
			v.push_back(x); 
		}
		ll a,b,c;
		cin>>a>>b>>c;
		string s; cin>>s;
		for(ll i=0;i<n;i++)
		{
			if(s[i]=='R')
				reverse(v.begin() + i, v.begin() + n); 
			else if(s[i]=='A')
			{	for (it = v.begin()+i; it != v.end(); it++)
				*it = (*it+a)%c;
			}
			else
			{	for (it = v.begin()+i; it != v.end(); it++)
				(*it)=(((*it)%c)*(b%c))%c;
			}
            cout<<v[i]%c<<" ";
		}
		cout<<'\n'; 
	}
}
