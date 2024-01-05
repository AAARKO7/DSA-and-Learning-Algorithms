/*Palindrome*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;

    cin>>s;

    int x=s.length();

    for(int i=0;i<x;i++)
    {
        if(s[i]!=s[x-1-i])
        {
            cout<<"Not a Palaindrome"<<endl;
            return;
        }
    }

    cout<<"Palaindrome"<<endl;

    return;
}

int main()
{
    int t=1;

    while(t--)
    {
        solve();
    }

    return 0;
}