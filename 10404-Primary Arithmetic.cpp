#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;

    for (;;) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }

        int c = 0;
        int carry = 0;

        while (a > 0 || b > 0) {
            int d1 = a % 10;
            int d2 = b % 10;

            int t = d1 + d2 + carry;
            carry = t / 10;

            if (carry > 0) {
                c++;
            }

            a /= 10;
            b /= 10;
        }
    
        if (c == 0) {
            cout << "No ";
        } else {
            cout << c << " ";
        }

        cout << "carry operation";

        if (c > 1) {
            cout << "s";
        }

        cout << "." << endl;
    }

    system("pause");
    return 0;
}