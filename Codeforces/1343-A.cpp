#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int t;
	cin>>t;
	while(t--)
	{
		int n; 
		cin>>n;
		long L = log2(1000000000),M;
		for(int i=2; i<=L; i++)
		{
			/* sum of pow(2,i) : [0,k-1] = pow(2,k)*/
		    M=pow(2,i)-1;
		    if(n%M==0)
		    {   
		        cout<<n/M<<"\n";
		        break;
		    }
		}
	}
}
