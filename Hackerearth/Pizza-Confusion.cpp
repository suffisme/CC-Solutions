#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    map<string,ll>ma;
    string s;
    char ch[20];
    ll k[n];
    for(int i=0;i<n;i++)
    {
        cin>>ch>>k[i];
        s = ch;
        ma[s]=k[i];
    }
    sort(k,k+n);
    for(int i=0;i<1;i++)
    {
        for(auto it=ma.begin();it!=ma.end();it++)
        {
            if(it->second==k[n-1-i])
            {
                cout<<it->first<<"\n";
                break;
            }
        }
    }
}
