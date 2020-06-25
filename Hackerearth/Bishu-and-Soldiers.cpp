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
    int a[n],s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+n);
    int q,p;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>p;
        if(p>=a[n-1])
        cout<<n<<" "<<s<<"\n";
        else{
            int i=0,sum=0;
            while(a[i]<=p)
            {
                sum += a[i];
                i++;
            }
            cout<<i<<" "<<sum<<"\n";
        }
    }
}
