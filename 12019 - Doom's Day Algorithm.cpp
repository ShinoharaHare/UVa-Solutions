#include <bits/stdc++.h>

using namespace std;

string weekdays[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int x[] = {10, 21, 7, 4, 9, 6, 11, 8, 5, 10, 7, 12};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int m, d;
        cin >> m >> d;

        int offset = (d - x[m - 1]) % 7;
        if (offset < 0) {
            offset += 7;
        }

        cout << weekdays[offset] << endl;
    }

    system("pause");
    return 0;
}