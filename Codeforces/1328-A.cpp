#include <bits/stdc++.h> 
#define ll long long
using namespace std; 
  
int main() 
{
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
    {
    	long a,b;
    	cin>>a>>b;
    	cout<<(b-a%b)%b<<"\n";
	}
}
