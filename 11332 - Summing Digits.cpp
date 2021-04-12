#include <bits/stdc++.h>

using namespace std;

string f(string s) {
    int sum = 0;
    for (char c : s) {
        sum += c - '0';
    }
    return to_string(sum);
}

int main() {
    string n;

    for (;;) {
        cin >> n;
        if (n == "0") {
            break;
        }

        for (int i = 0; i < 3; i++) {
            n = f(n);
        }

        cout << n << endl;
    }

    system("pause");
    return 0;
}