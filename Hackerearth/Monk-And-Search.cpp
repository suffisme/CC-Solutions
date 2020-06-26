#include <bits/stdc++.h>

using namespace std;

int BS1(long a[],int n,long m)
{
	int beg = 0,last = n;
	int mid;
	while(beg<=last)
	{
		mid = (beg+last)/2;
		if(a[mid]<=m && a[mid+1]>m)
		return mid+1;
		else if(a[mid]<=m)
		beg = mid+1;
		else last = mid-1;
	}
	return 0;
}

int BS0(long a[],int n,long m)
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
	int q,m;
	long x;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>m;
		if(m==1)
        {
            cin>>x;
            if(a[0]>x)
                cout<<n<<"\n";
            else if(a[n-1]<=x)
                cout<<"0\n";
            else 
            cout<<n - BS1(a,n,x)<<"\n";
        }
        else{
            cin>>x;
            if(a[0]>=x)
                cout<<n<<"\n";
            else if(a[n-1]<x)
                cout<<"0\n";
            else 
            cout<<n - BS0(a,n,x)<<"\n";
        }
	}
}
