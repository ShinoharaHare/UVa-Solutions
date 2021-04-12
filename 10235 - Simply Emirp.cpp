#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    while (cin >> n) {
        cout << n << " ";
        if (isPrime(n)) {
            string s = to_string(n);
            reverse(s.begin(), s.end());

            if (stol(s) != n && isPrime(stol(s))) {
                cout << "is emirp." << endl;
            } else {
                cout << "is prime." << endl;
            }
        } else {
            cout << "is not prime." << endl;
        }
    }
    return 0;
}