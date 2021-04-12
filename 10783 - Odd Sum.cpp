#include <bits/stdc++.h>


using namespace std;


int main() {
    int t, a, b;

    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> a >> b;
        a = a % 2 == 1 ? a : a + 1;
        int aa = 0;
        for (int x = a; x <= b; x += 2) {
            aa += x;
        }

        printf("Case %d: %d\n", i, aa);
    }

    system("pause");
    return 0;
}