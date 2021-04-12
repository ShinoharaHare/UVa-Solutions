#include <bits/stdc++.h>


using namespace std;


int main() {
    int t, s, d;

    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> s >> d;
        
        if (s + d % 2 == 1 || abs(s - d) % 2 == 1 || s - d < 0) {
            cout << "impossible" << endl;
        } else {
            printf("%d %d\n", (s + d) / 2, abs(s - d) / 2);
        }
    }

    system("pause");
    return 0;
}