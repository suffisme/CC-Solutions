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
    	long n,s=0;
    	cin>>n;
    	int a[5]={100,20,10,5,1};
    	for(int i=0;i<5;i++)
    	{
    		s += n/a[i];
    		n %= a[i];
		}
		cout<<s;
	}
}
