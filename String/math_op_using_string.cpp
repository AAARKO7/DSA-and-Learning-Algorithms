/*Calculator(contest 219158O) {math operations using string also type casting}*/

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    int a=0;
    int b=0;
    int i;
    for(i=0 ; i<s.length() ; i++) 
    {
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') //search for operator
        {
            int dig=0;
            for(int j=i-1 ; j>=0 ; j--) //digit calculation and convert char to int type
            {
                a = (s[j]-48) *pow(10,dig) + a; //'0' == 48(ASCCI)
                dig++;
            }

            dig=0;
            for(int j=s.length()-1 ; j>i ; j--) 
            {
                b = (s[j]-48) *pow(10,dig) + b;
                dig++;
            }

            break;
        }
    }

    // cout << a << b << i << endl;
    if(s[i]=='+') 
    {
        cout << a+b << endl;
    }
    else if(s[i] == '-') 
    {
        cout << a-b << endl;
    }
    else if(s[i] == '*') 
    {
        cout << a*b << endl;
    }
    else if(s[i] == '/') 
    {
        cout << a/b << endl;
    }


   return 0; 
}