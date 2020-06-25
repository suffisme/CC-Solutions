#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
    {
        long n,k,p;
        cin>>n>>k>>p;
        int a[k];
        for(int i=0;i<k;i++)
        cin>>a[i];
        sort(a,a+k);
        if(n-k<p)
            cout<<"-1\n";
        else{
            int i=0;
            while(a[i]<=p && i<k)
            {
                i++;
                p++;
            }
            cout<<p<<"\n";
        }
    }
}
