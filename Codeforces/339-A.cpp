//solution1
#include<iostream>
#include<map>
#include<cstring>
using namespace std;

int main()
{
	char s[101];
	cin>>s;
	map<char,int>ma;
	for(int i=0;s[i]!='\0';i++)
	{
	if(i%2==0)
	ma[s[i]]++;
	}map<char,int>::iterator it=ma.begin();
	for(;it!=ma.end();it++)
	{
		if(it!=ma.begin())
		cout<<"+";
		for(int i=0;i<it->second;i++)
		{
			cout<<it->first;
			if(i!=it->second-1)
			cout<<"+";
		}
	}
}
 


//solution2
#include<iostream>
#include<map>
#include<cstring>
using namespace std;

int main()
{
	char s[101];
	int c1,c2,c3;
	c1=c2=c3=0;
	cin>>s;
	for(int i=0;s[i]!='\0';i++)
	{
	   if(s[i]=='1')
	   c1++;
	   else if(s[i]=='2')
	   c2++;
	   else if(s[i]=='3')
	   c3++;
	}
	for(int i=0;i<c1;i++)
	{ 
	   cout<<"1";
	   if(i!=c1-1)
	   cout<<"+";
	    
    }
    if(c2>0 && c1>0)
    cout<<"+";
	for(int i=0;i<c2;i++)
	{
	cout<<"2";
	if(i!=c2-1)
	   cout<<"+";
	}
	if(c3>0 && (c2>0 || c1>0) )
    cout<<"+";
	for(int i=0;i<c3;i++)
	{
	cout<<"3";
	if(i!=c3-1)
	   cout<<"+";
	}
} 