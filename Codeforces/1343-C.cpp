#include <bits/stdc++.h>
	 
using namespace std;
	 
int main() {
    long long t;
    cin>>t;
    for(int u=0;u<t;u++){
    long long n;
    cin>>n;
    long long arr[n];
    long long maxi=0;
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i==0)maxi=arr[0];
        else{
            if(arr[i]*arr[i-1]<0){
                sum+=maxi;
                maxi=arr[i];
            }
            else maxi=max(maxi,arr[i]);
        }
    }
    cout<<sum+maxi<<endl;
    }
    return 0;
}

/* *********ALTERNATE SOLUTION********** */
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
