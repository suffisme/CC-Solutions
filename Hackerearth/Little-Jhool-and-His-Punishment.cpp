#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {   T--;
        int N,b,g;
        cin>>N>>b>>g;
        if(abs(b-g)>1)
        cout<<"Little Jhool wins!\n";
        else cout<<"The teacher wins!\n";
    }
}
