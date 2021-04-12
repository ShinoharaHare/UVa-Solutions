#include <iostream>

using namespace std;

#define MAX int(10e6+1)

int count[MAX] = {0};
int ans[MAX] = {1, 1};

void init() {
    for (int i = 1; i < MAX; i++) {
        for (int j = i; j < MAX; j = j + i) {
            count[j] += 1;
        }
    }

    for (int i = 2; i <= MAX; i++) {
        if (count[ans[i - 1]] > count[i]) {
            ans[i] = ans[i - 1];
        } else {
            ans[i] = i;
        }
    }
}

int main() {
    init();

    int t;
    cin >> t;

    for (int _ = 0; _ < t; _++) {
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }

    system("pause");
    return 0;
}