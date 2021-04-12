#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    getline(cin, s);

    map<char, int> count;

    while (n--) {
        getline(cin, s);

        for (char c : s) {
            if (isalpha(c)) {
                char x = toupper(c);
                count[x]++;
            }
        }
    }

    vector<char> v;

    for (auto pair : count) {
        v.push_back(pair.first);
    }

    sort(v.begin(), v.end(), [&](char a, char b) {
        return count[a] > count[b];
    });

    for (char c : v) {
        printf("%c %d\n", c, count[c]);
    }

    system("pause");
    return 0;
}