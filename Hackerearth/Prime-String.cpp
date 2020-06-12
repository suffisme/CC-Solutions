#include<bits/stdc++.h>
using namespace std;

void Erasthothenes(bool P[],int n)
{
	for(int i=0;i<n;i++)
	P[i]=true;
	for(int i=2;i*i<n;i++)
	{
		if(P[i])
		{
			for (int j=i*i; j<=n; j += i) 
                P[j] = false; 
		}
	}
	P[1]=false;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int t=1;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l = s.length();
		bool isPrime[l+1];
		Erasthothenes(isPrime,l+1);
		map<char,int>ma;
		for(int i=0;i<l;i++)
		{
			ma[s[i]]++;
		}
		bool flag = true;
		map <char,int>::iterator it;
		for(it = ma.begin();it!=ma.end();it++)
		{
			if(!isPrime[it->second])
			{
			flag=false;
			break;}	
		}
		if(isPrime[ma.size()]&&flag)
		cout<<"YES\n";
		else cout<<"NO\n";	
	}
}
