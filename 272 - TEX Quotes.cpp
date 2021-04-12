#include <bits/stdc++.h>

using namespace std;


int main() {
    string s, w;

    while (getline(cin, s)) {
        w += s + "\n";
    }

    bool first = true;
    for (char c : w) {
        if (c == '\"') {
            if (first) {
                cout << "``";
            } else {
                cout << "''";
            }
            first = !first;
        } else {
            cout << c;
        }
    }

    system("pause");
    return 0;
}