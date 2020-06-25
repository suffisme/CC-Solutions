#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,a;
    cin>>n;
    int hash[100001]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a;
        hash[a]++;
    }
    cin>>a;
    for(int i=0;;i++)
    {
        if(hash[i]==a)
        {
            cout<<i;
            break;
        }
    }
}
