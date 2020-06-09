#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
ll n,sum=0,p=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
   cin>>a[i];
   sum+=a[i];
}
if(sum%2)
{
   for(int i=0;i<n;i++) 
   {
      p+=a[i];
      if(p>sum/2) {cout<<i+1;break;}
   } 
}
else 
{
   for(int i=0;i<n;i++) 
   {
       p+=a[i];
       if(p>=sum/2) {cout<<i+1;break;}
   }
}
}
