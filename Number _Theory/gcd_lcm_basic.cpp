/*
    Author: Arko7
*/

/*GCD and LCM*/

#include<bits/stdc++.h> 
using namespace std;

int gcd(int a, int b) {  // up c++17 gcd(a,b) 
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) { //lcm(a.b)
    return abs(a * b) / gcd(a, b); 
}

int main() {
    int a = 12, b = 18;

    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    cout << "LCM of " << a << " and " << b << " is " << lcm(a, b) << endl;

    return 0;
}
