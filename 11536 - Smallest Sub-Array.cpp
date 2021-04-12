#include <iostream>
#include <queue>

using namespace std;

int main() {
    int num;
    cin >> num;

    for (int _ = 0; _ < num; _++) {
        int x[1000001] = {1, 2, 3};
        int n, m, k;
        cin >> n >> m >> k;

        for (int i = 4; i < n; i++) {
            x[i] = (x[i - 1] + x[i + 2] + x[i - 3]) % m + 1;
        }

        bool checked[101] = {false};
        queue<int> q;
        for (int i = 1; i < n; i++) {
            q.push(i);
        }
    }

    system("pause");
    return 0;
}