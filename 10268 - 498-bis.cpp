#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    string s;

    while (cin >> x && getline(cin, s) && getline(cin, s)) {
        stringstream ss(s);
        long long a;
        vector<long long> v;
        while (ss >> a) {
            v.push_back(a);
        }
        a = 0;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            if (x != 0 || n - i - 2 == 0) {
                a += v[i] * (n - i - 1) * pow(x, n - i - 2);
            }
        }

        cout << a << endl;
    }

    return 0;
}