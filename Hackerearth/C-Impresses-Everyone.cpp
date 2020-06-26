#include <bits/stdc++.h>
#define ll long long

using namespace std;

int BS(long a[],long n,long m)
{
	int beg = 0,last = n-1;
	int mid;
	while(beg<=last)
	{
		mid = (beg+last)/2;
		if(a[mid]>=m && a[mid+1]<m)
		return mid;
		else if(a[mid]<m)
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
    int n,q,x;
    cin>>n;
    long A[n],a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    A[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    A[i]=A[i+1]+a[i];
    cin>>q;
    string s[2]={"A","B"};
    for(int i=0;i<q;i++)
    {
        cin>>x;
        if(x>A[1])
         cout<<"A\n";
        else if(x<=A[n-1])
         cout<<s[(n-1)%2]<<"\n";
        else cout<<s[BS(A,n,x)%2]<<"\n";
    }
}
