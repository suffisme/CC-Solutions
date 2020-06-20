#include <bits/stdc++.h>
#define ll long long

using namespace std;
bool P[10001];
void SieveOfErasthothenes()
{
    int n = 10001;
	for(int i=0;i<n;i++)
	P[i]=true;
	for(int i=2;i*i<n;i++)
	{
		if(P[i])
		{
			for(int j=i*i; j<=n; j += i) 
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
    int l,r;
    cin>>l>>r;
    SieveOfErasthothenes();
    for(int i=l;i<=r;i++)
    if(P[i])
    cout<<i<<" ";
}
