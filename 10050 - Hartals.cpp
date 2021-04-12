#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, p;
    cin >> t;
    while (t--) {
        cin >> n >> p;
        int h[p];
        for (int i = 0; i < p; i++) {
            cin >> h[i];
        }

        int ans = 0;

        for (int day = 1; day <= n; day++) {
            int weekday = (day + 5) % 7 + 1;
            if (
                weekday != 5 &&
                weekday != 6 &&
                any_of(h, h + p, [=] (int x) { return day % x == 0; })) {
                ans++;
            }
        }

        cout << ans << endl;
    }

    system("pause");
    return 0;
}