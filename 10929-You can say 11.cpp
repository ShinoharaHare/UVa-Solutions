#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;

    for (;;) {
        cin >> s;
        int odd = 0;
        int even = 0;
        
        if (s == "0") {
            break;
        }

        for (int i = 0; i < s.length(); i++) {
            if (i % 2 == 0) {
                even += s[i] - '0';
            } else {
                odd += s[i] - '0';
            }
        }

        printf("%s is %sa multiple of 11.\n", s.c_str(), (abs(even - odd) % 11 == 0) ? "" : "not ");
    }

    system("pause");
    return 0;
}