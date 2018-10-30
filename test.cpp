#include <bits/stdc++.h>
using namespace std;

bool x[100000001] = {false};

int main() {

    for (int i = 1; i <= 1000; i++)
        for (int k = 1; k*i <= 1000; k++)
            x[i * k] = !x[i * k];

    int rs = 0;
    for (int i = 1; i <= 1000; i++) {
        if (x[i]) rs++;
    }
    cout << rs << '\n';
}
