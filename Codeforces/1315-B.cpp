#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		long a,b,p,l,m=0,j=1;
		char S[100000],ch;
		cin>>a>>b>>p;
		cin>>S;
		l=strlen(S);
		ch='S';
		for(int i=l-2;i>=0;i--)
		{
			if(S[i]=='A')
			{
				if(ch!='A')
				{
					m+=a;
					ch='A';
				}
			}
			else
			{
				if(ch!='B')
				{
					m+=b;
					ch='B';
				}
			}
			
			if(m>p)
			{
				j=i+2;
				break;
			}
		}
		cout<<j<<endl;
		t--;
	}
} 