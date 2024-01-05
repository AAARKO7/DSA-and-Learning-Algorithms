/*Factorial(general)*/

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    long long n;
        
    cin>>n; 

    // factorial calculation
    long long factorial = 1;
        
    for(int i=2;i<=n;i++) 
    {
        factorial*=i;
    }
    
    cout<<factorial<<endl;

    return 0;
}