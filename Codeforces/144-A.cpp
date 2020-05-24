#include<iostream>

using namespace std;

int main()
{
	int n,min=101,m,lar=1,l;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(min>=a[i])
		{
			min=a[i];
			m=i;
		}
		if(lar<a[i])
		{
			lar=a[i];
			l=i;
		}
	}
	if(l>m)
	cout<<(l-1)+(n-m)-1;
	else cout<<(l-1)+(n-m);
}