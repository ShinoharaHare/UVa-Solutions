#include <bits/stdc++.h>

using namespace std;

int main() {
    long long s, d;
    while (cin >> s >> d) {
        for (;; s++) {
            d -= s;
            if (d <= 0) {
                break;
            }
        }
        cout << s << endl;
    }

    system("pause");
    return 0;
}