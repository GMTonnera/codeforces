/*
    Problem: A. Nastia and Nearly Good Numbers
    Data: 10/03/2025
*/


#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long a, b;
        unsigned long long x, y, z;

        cin >> a >> b;

        if (b != 1) {
            cout << "YES\n";

            x = a*b;
            y = a;
            z = x+y;

            cout << x << " " << y << " " << z << "\n";
        }
        else {
            cout << "NO\n";
        }
        
    }
    
    return 0;
}