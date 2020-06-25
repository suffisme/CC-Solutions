#include<iostream>

using namespace std;
int main()
{
	char S[100000];
	cin.getline(S,1000000);
	int a[26];
	for(int i=0;i<26;i++)
	a[i]=0;
	for(int i=0;S[i]!='\0';i++)
	{
		if(a[(int)(S[i]-'a')]==0)
		{
			cout<<S[i];
			a[(int)(S[i]-'a')]=1;
		}
	}
}
