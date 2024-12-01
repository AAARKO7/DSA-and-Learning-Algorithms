/*Nth Fibonacci Number(Recision) {O(2^n)}*/

#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
} 

int main()
{
    int n;
    cin>>n;
    cout << n << "th Fibonacci Number: " << fib(n);
    return 0;
}