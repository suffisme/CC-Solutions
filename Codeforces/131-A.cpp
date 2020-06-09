#include <bits/stdc++.h>
using namespace std;
int main() 
{
	string s;
	cin>>s;
	int l = s.length(),flag = 0;
	for(int i=1;i<l;i++)
	{
		if(islower(s[i]))
		{
			flag =1;
			break;
		}
	}
	if(flag==1)
	cout<<s;
	else{
		if(isupper(s[0]))
		cout<<(char)tolower(s[0]);
		else cout<<(char)toupper(s[0]);
		for(int i=1;i<l;i++)
		cout<<(char)tolower(s[i]);
	}
}
