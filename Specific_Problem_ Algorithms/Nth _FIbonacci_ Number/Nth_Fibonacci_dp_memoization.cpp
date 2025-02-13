/*Nth Fibonacci Number{DP(Memoization)} {O(n)}*/

#include<bits/stdc++.h>
using namespace std;

const int N=1e5+2;

int dp[N];

int fib(int n)
{
    if (n <= 1)
    {
        //dp[n]=n; //if we want to keep the 0 and 1 in the dp
        return n;
    }

    if(dp[n]!=-1){
        return dp[n];
    }

    dp[n]= fib(n - 1) + fib(n - 2);
    
    return dp[n];
} 

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<N;i++)
    {
        dp[i]=-1;
    }

    cout << n << "th Fibonacci Number: " << fib(n);

    // for(int i=0;i<10;i++){
    //     cerr<<dp[i]<<"\n";
    // }
    
    return 0;
}