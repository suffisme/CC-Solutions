#include<iostream>
using namespace std;

int l=0;

int re(int a[],int n,int k)
{
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=1 && i>k)
		{
		a[i]=1;
		return i;
		}
	}
	l=1;
	return 0;
}


int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		l=0;
		int n;
		cin>>n;
		int b[n+1],a[2*n+1],c[2*n+1]={0};
		for(int i=1;i<=n;i++)
		{
			cin>>b[i];
			a[2*i-1]=b[i];
			c[b[i]]=1;
			if(b[i]==2*n)
			l=1;
		}
		for(int i=2;i<=2*n;i=i+2)
		{
			a[i]=re(c,2*n,b[i/2]);
		}
		
		if(l==1)
		cout<<"-1";
		else
		for(int i=1;i<=2*n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
		t--;
	}
}