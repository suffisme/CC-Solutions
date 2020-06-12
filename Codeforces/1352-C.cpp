#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

 
int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin >> n>>k;
        int ans=k+floor((k-1)/(n-1));
        cout<<ans<<'\n';
    }
}
