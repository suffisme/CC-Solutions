#include <bits/stdc++.h> 
#define ll long long
using namespace std; 
  
int main() 
{
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--)
    {
    	long n,k;
    	cin>>n>>k;
    	cout<<3*n + min(n-k,k-1);
	}
}
 
/*
n time for coins
n-1 times for travelling whole path
min(n-k,n-1) travelling extra
n+1 time for rocks
*/
