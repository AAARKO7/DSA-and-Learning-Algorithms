/*Prime or not*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;

    cin>>n;

    int x=sqrt(n);

    bool prime=true;

    for(int i=2;i<x;i++)
    {
        if(n%i==0)
        {
            prime=false;
        }
    }

    if(prime==false)
    {
        cout<<"Not Prime"<<endl;
    }

    else
    {
        cout<<"Prime"<<endl;
    }
}