#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
int n,m,c=0;
cin>>n>>m;
int max[m];
for(int i=0;i<m;i++)
{
    max[i]=0;
}
char v[n][m];
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
      if(v[j][i]-'0'>max[i])
        max[i]=v[j][i]-'0';
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
      if(v[i][j]-'0'==max[j])
        {
            c++;
            break;
        }
    }
}
cout<<c;
	return 0;
} 
