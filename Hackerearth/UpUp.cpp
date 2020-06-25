
#include <iostream>
#include <cctype>

using namespace std;
int main()
{
char str[30001];
cin.getline(str,30001,'\n');
for(int i=0;str[i]!='\0';i++)
{
    
    if(i==0)
    str[i]=toupper(str[i]);
    else
    {
        if(str[i-1]==' ')
    str[i]=toupper(str[i]);
    }
}
cout<<str;
return 0;
}
