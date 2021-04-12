#include <bits/stdc++.h>

using namespace std;

int main() {
    int i = 1;
    int n;
    while (cin >> n) {
        bool b = true;
        int arr[n];
        map<int, bool> m;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[0] < 1 || i > 0 && arr[i] <= arr[i - 1]) {
                b = false;
            }
        }

        if (!b) {
            goto end;
        }

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int x = arr[i] + arr[j];
                if (m[x]) {
                    b = false;
                    goto end;
                }
                m[x] = true;
            }
        }
    end:

        printf("Case #%d: It is %sa B2-Sequence.\n\n", i++, b ? "" : "not ");
    }


    system("pause");
    return 0;
}