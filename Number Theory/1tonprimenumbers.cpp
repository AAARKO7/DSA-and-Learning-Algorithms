/*Find Between(print) 1 to n prime numbers */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;

    cin>>n;


    for(int i=2;i<=n;i++)
    {   
        int x=0; // flag

        int y=sqrt(i);

        for(int j=2;j<=y;j++)
        {
            if(i%j==0)
            {
                x=1;
                break;
            }
        }

        if(x==0 && n>1)
        {
            if(i==n-2) // for last digit..loop starts from 2 and last digit..so we substract 2
            {
                cout<<i;
            }

            else
            {
                cout<<i<<" ";
            }
           
        }
    }

    return 0;
}