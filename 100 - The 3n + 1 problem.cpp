#include <bits/stdc++.h>

using namespace std;

int cl(int n) {
    int c = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        c++;
    }
    return c;
}

int main() {
    int i, j;
    while (cin >> i >> j) {
        int a = 1;

        int ii = min(i, j);
        int jj = max(i, j);

        for (int x = ii; x <= jj; x++) {
            a = max(a, cl(x));
        }

        printf("%d %d %d\n", i, j, a);
    }
    system("pause");
    return 0;
}