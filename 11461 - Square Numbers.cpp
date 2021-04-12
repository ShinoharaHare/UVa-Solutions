#include <bits/stdc++.h>


using namespace std;


int main() {
    for (;;) {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }

        int c = 0;
        for (int i = a; i <= b; i++) {
            auto p = pow(i, .5);
            if (p == int(p)) {
                c++;
            }
        }
        cout << c << endl;
    }
    system("pause");
    return 0;
}