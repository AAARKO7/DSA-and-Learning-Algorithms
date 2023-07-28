/*Sieve of Eratosthenes*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int sieve[n+1]={0};

    for(int i=2;i<=n;i++)
    {
        if(sieve[i])
        continue;

        for(int j=2*i;j<=n;j=j+i)
        {
            sieve[j]=i;
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(!sieve[i])
        {
            cout<<i<<" ";
        }
    }

    cout<<endl;

    return 0;
}