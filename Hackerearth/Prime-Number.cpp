#include <iostream>

using namespace std;

int main()
{
    int N,i=2,k;
    cin>>N;
    while(i<=N)
    { k=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            k=1;
        }
        if(k==0)
        cout<<i<<" ";
        i++;
    }
}
