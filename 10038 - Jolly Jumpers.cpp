#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;

    while (cin >> n) {
        int x, lx;
        bool c[n] = {false};
        bool jolly = true;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (i >= 1) {
                int d = abs(lx - x);
                if (d >= n || c[d]) {
                    jolly = false;
                } else {
                    c[d] = true;
                }
            }
            lx = x;
        }

        cout << (jolly ? "Jolly" : "Not jolly") << endl;
    }

    system("pause");
    return 0;
}