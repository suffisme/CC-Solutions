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
        long d,a,m,b,x;
        cin>>d>>a>>m>>b>>x;
        long ans = ((x-d)/(a*m+b));
        long M = x-d - ans*(a*m+b);
        cout<<(m+1)*ans + (long)ceil((double)M/a)<<"\n";
    }
}
