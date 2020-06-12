#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t; cin>>t;
	while(t--)
	{
		ll n,x,m;
        cin>>n>>x>>m;
        ll right=x,left=x;
        for(int i=0;i<m;i++)
        {
            ll l,r;
            cin>>l>>r;
            if( left>r || right<l )
                continue;
            left = min(l,left);
            right = max(right,r);
        }
        cout<<right-left+1<<endl;
	}
}

/* *******ALTERNATE DESCRIPTIVE SOLUTION******** */
#include <bits/stdc++.h> 
#define ll long long
using namespace std; 
  
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	long n,x,m,ans=0,l,r;
    	cin>>n>>x>>m;
    	long min=n,max=1;
		for(int i=0;i<m;i++)
    	{
    		cin>>l>>r;
    		if(l<=x && x<=r)
    		{
    			if(l<min)
    			min=l;
    			if(r>max)
    			max = r;
			}
			else if(l>=min && r>=max && l<=max)
			{
				max = r;
			}
			else if(l<=min && r<=max && r>=min)
			min = l;
		}
		if(min>max)
		cout<<"1\n";
		else
		cout<<max-min+1<<'\n';
	}
}
