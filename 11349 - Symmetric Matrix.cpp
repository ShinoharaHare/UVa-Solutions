#include <bits/stdc++.h>


using namespace std;


int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int n;
        cin.ignore();
        scanf("N = %d", &n);


        bool s = true;
        int nn = n * n;
        long long m[nn];
        for (int i = 0; i < nn; i++) {
            cin >> m[i];
            if (m[i] < 0) {
                s = false;
            }
        }

        if (s) {
            for (int i = 0; i < nn / 2; i++) {
                if (m[i] != m[nn - 1 - i]) {
                    s = false;
                    break;
                }
            }
        }

        printf("Test #%d: %s.\n", i, s ? "Symmetric" : "Non-symmetric");
    }

    system("pause");
    return 0;
}