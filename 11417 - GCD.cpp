#include <bits/stdc++.h>

using namespace std;

int gcd(int m, int n) {
    int t = 1;
    while (t != 0) {
        t = m % n;
        m = n;
        n = t;
    }
    return m;
}


int main() {
    int n;
    for (;;) {
        cin >> n;
        if (n == 0) {
            break;
        }
        int g = 0;
        for (int i = 1; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                g += gcd(i, j);
            }
        }
        cout << g << endl;
    }

    system("pause");
    return 0;
}