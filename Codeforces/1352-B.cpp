#include <bits/stdc++.h> 
#define ll long long
using namespace std; 
  
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if((n-(k-1))%2 && (n-(k-1))>0)
        {
            cout<<"YES\n";
            for (ll i = 0; i < k-1; i++) 
                cout<<1<<" ";
            cout<<(n-(k-1))<<"\n";
        }
        else if((n-2*(k-1))%2 == 0 && (n-2*(k-1))>0)
        {
            cout<<"YES\n";
            for (ll i = 0; i < k-1; i++)
                cout<<2<<" ";
            cout<<(n-2*(k-1))<<"\n";
        }
        else
            cout<<"NO\n";
}
}
