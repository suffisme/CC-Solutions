#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool P[1000001];
vector<int>v;
void Erasthothenes()
{
    int n = 1000001;
	for(int i=0;i<n;i++)
	P[i]=true;
	for(int i=2;i*i<n;i++)
	{
		if(P[i])
		{
            v.push_back(P[i]);
			for(int j=i*i; j<=n; j += i) 
                P[j] = false; 
		}
	}
	P[1]=false;
}

int sum(int n)
{
    int s=0;
    while(n>0)
    {
        s += n%10;
        n /= 10;
    }
    return s;
}
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Erasthothenes();
    int t=1;
    //cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            if(P[i] && P[sum(i)])
            cout<<i<<" ";
        }
    }
}
