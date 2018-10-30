#include <bits/stdc++.h>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n > 1) {
        cout << sqrt(n) << endl;
        for (int k = 2; k <= sqrt(n); ++k) 
            if (n % k == 0)
                return false;
    } else return false;
         
    return true;
}

int main() {
    int n; 
    while (cin >> n, n) {
        for (int i = 1; i <= n; i++)
            if (isPrime(i))
                cout << i << " ";
        cout << '\n';
    }
}
