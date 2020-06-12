
#include <bits/stdc++.h> 
#define ll long long
using namespace std; 
  
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	ll a[n],sum = 0;
    	for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++)
		{
			ll temp = a[i],j=i;
			while(j<n)
			{
				temp = temp>a[j]?temp:a[j];
				j++;
				if(a[i]*a[j]<0)
				break;
			}
			sum += temp;
			i = j - 1;
		} 
		cout<<sum<<"\n";
	}
}
