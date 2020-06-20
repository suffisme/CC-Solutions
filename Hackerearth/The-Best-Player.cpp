#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,t,count=0;
    cin>>n>>t;
    vector< pair<string,ll> >v;
    string s;
    ll k[n];
    for(int i=0;i<n;i++)
    {
        cin>>s>>k[i];
        v.push_back(make_pair(s,k[i]));
    }
    sort(k,k+n);
    sort(v.begin(),v.end());
    for(int j=0;j<t;j++)
    {
        for(ll i=0;i<v.size();i++)
        {
            if(v[i].second==k[n-1-j])
            {
                cout<<v[i].first<<"\n";
                v.erase(v.begin()+i);
                break;
            }
        }
    }
}
