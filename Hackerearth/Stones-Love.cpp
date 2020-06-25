#include <bits/stdc++.h>
#define ll long long

using namespace std;

long BS(long s[],long q,int n)
{
    int beg = 0,last = n;
    int mid = (beg+last)/2;
    while(beg<=last)
    {
        mid = (beg+last)/2;
        if (s[mid]>=q && s[mid-1]<q)
            return mid+1;
        else if (s[mid]>q)
            last = mid-1;
        else beg = mid+1;
    }
    return 1;
}

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,q;
    cin>>n>>q;
    int a[n];
    long s[n];
    cin>>a[0];
    s[0]=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        s[i] = s[i-1]+a[i];
    }
    long Q;
    for(int i=0;i<q;i++)
    {
        cin>>Q;
        cout<<BS(s,Q,n)<<"\n";
    }
}
