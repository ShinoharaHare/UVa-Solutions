#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, i;
        float p;

        cin >> n >> p >> i;

        float a = 0;
        for (int x = i;; x += n) {
            float pp = p * pow(1 - p, x - 1);
            if (pp == 0) {
                break;
            }
            a += pp;
        }

        printf("%.4f\n", a);
    }

    system("pause");
    return 0;
}