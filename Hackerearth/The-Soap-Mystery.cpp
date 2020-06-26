#include <bits/stdc++.h>

using namespace std;

int BS(long a[],int n,int m)
{
	int beg = 0,last = n;
	int mid;
	while(beg<=last)
	{
		mid = (beg+last)/2;
		if(a[mid]<m && a[mid+1]>=m)
		return mid+1;
		else if(a[mid]<m)
		beg = mid+1;
		else last = mid-1;
	}
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n;
	cin>>n;
	long a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	int q;
	long m;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>m;
		if(a[n-1]<m)
		cout<<n<<"\n";
		else cout<<BS(a,n,m)<<"\n";
	}
}
