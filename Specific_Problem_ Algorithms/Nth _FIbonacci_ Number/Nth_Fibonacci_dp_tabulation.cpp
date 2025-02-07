/*Nth Fibonacci Number{DP(Tabulation)} {O(n)}*/

#include<bits/stdc++.h>
using namespace std;

const int N=1e5+2;

int dp[N];

int fib(int n)
{
    dp[0]=0;
    dp[1]=1;

    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
} 

int main()
{
    int n;
    cin>>n;

    cout << n << "th Fibonacci Number: " << fib(n);
    return 0;
}