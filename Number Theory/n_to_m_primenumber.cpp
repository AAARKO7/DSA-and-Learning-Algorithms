/*
    Solver: Arko7
    Date: 14 April,2023

*/

/*Generate Prime!(D)*/

#include<bits/stdc++.h> 
using namespace std;

// check prime
bool solve(long long x) 
{
    if (x<=1)
    {
        return false;
    }
        
    long long y=sqrt(x);

    for(int i=2;i<=y;i++) 
    {
        if (x%i==0)
        {
            return false;
        }
            
    }
    return true;
}

int main() 
{
    int t;
    
    cin>>t;

    while (t--) 
    {
        long long m,n;

        cin>>m>>n;

        for(long long i=m;i<=n;i++) 
        {
            if (solve(i)) //call
                cout<<i<<endl; //Output
        }
        cout<<endl;
    }

    return 0;
}