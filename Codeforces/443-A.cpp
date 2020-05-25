#include<iostream>

using namespace std;

int main()
{
	char a[10000];
	long k[26]={0},s=0;
	cin.getline(a,10000);
	for(int i=1;a[i]!='\0';i=i+3)
	{
		k[(int)a[i]-97]++;
	}
	for(int i=0;i<26;i++)
	{
		if(k[i]>0)
		s++;
	}
	cout<<s;
}

//Other Solution
#include <iostream>
#include<set>
using namespace std;
int main(){
    char arr[10000];
    set <char> s;
    cin.getline(arr,10000);
    if(arr[i]!='}')
    for(int i=1; arr[i]!='\0'; i=i+3) 	s.insert(arr[i]);
	cout<<s.size();
}