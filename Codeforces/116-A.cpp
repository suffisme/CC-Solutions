#include<bits/stdc++.h>
using namespace std;
#define PB push_back
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int t,capacity = 0;
	cin>>t;
	vector<long> v;
	while(t--)
	{
		long a,b;
		cin>>a>>b;
		capacity += b-a;
		v.PB(capacity);
	}
	sort(v.begin(),v.end());
	cout<<v[v.size()-1];
}
