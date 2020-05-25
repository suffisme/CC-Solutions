#include <bits/stdc++.h>
using namespace std;
int main(){
    char a[100],b[100];
    cin>>a>>b;
    if(strcmpi(a,b)==0) cout<<"0";
    else if(strcmpi(a,b)>0) cout<<"1";
    else if(strcmpi(a,b)<0) cout<<"-1";
}