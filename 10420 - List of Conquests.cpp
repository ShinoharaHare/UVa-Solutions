#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> count;

    while (n--) {
        string country;
        cin >> country;
        count[country]++;
        getline(cin, country);
    }

    for (auto pair : count) {
        printf("%s %d\n", pair.first.c_str(), pair.second);
    }

    system("pause");
    return 0;
}