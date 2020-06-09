#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int edge1,edge2,edge;
		edge1 = max(2*a,b);
		edge2 = max(a,2*b);
		edge = min(edge1,edge2);
		cout<<edge*edge<<"\n";
	}
}
