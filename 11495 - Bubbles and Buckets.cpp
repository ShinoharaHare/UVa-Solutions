#include <bits/stdc++.h>

using namespace std;

void merge_sort(vector<int> &v, int f, int e) {
    if (f < e) {
        int mid = (f + e) / 2;
        merge_sort(v, f, mid);
        merge_sort(v, mid + 1, f);

        vector<int> l = vector<int>(v.begin() + f, v.begin() + mid);
        vector<int> r = vector<int>(v.begin() + mid + 1, v.begin() + e);

        if (l.front() < r.front()) {
            for (int i = f; i < mid; i++) {
                v[i] = l[i - f];
            }
            for (int i = mid + 1; i < e; i++) {
                v[i] = r[i - f];
            }
        } else {
            for (int i = f; i < mid; i++) {
                v[i] = r[i - f];
            }
            for (int i = mid + 1; i < e; i++) {
                v[i] = l[i - f];
            }
        }
    }
}

int main() {
    int n;
    for (;;) {
        cin >> n;

        if (n == 0) break;

        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int count = 0;
        merge_sort(v, 0, v.size());

        cout << count << endl;
    }

    return 0;
}