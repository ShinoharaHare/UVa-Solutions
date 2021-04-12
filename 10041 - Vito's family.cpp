#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int r;
        cin >> r;

        vector<int> arr;
        arr.resize(r);

        for (int i = 0; i < r; i++) {
            cin >> arr[i];
        }
        
        sort(arr.begin(), arr.end());

        int d = 0;
        int m = arr[r / 2];

        for (int x : arr) {
            d += abs(x - m);
        }

        cout << d << endl;
    }

    return 0;
}