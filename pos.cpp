#include <bits/stdc++.h>

using namespace std;

int m[8] {1, 5, 10, 20, 50, 100, 500, 1000};

// ()? true:false VS if else, Which one?
int max_bill(int n) {
    int i = 7;
    for (;i >=0; i--)
        if (n - m[i] >= 0) 
            break;

    return m[i];
}

void which_bills(int n) { // *มี s
    do { 
        cout << max_bill(n) << ' ';
        n = n - max_bill(n);
    } while (n > 0);
    cout << '\n';
}

int main() {
    int payment ,price;
    while (cin >> payment >> price && (payment || price)) {
        if (payment - price > 1) {
            cout << payment - price << ": "; which_bills(payment - price);
        } else continue;
    }
    return 0;
}
