
 #include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n],b[n],c[n];
  if(n>0 && n<=100000)
  {
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<n;i++)
  cin>>b[i];
  for(int i=0;i<n;i++)
  {
    if((a[i]>0 && a[i]<=100000)&&(b[i]>0&&b[i]<=100000))  {
      if(i!=0) cout<<" ";
      cout<<a[i]+b[i];
  }}
  }
    return 0;
}
