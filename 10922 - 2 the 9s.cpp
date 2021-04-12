#include <bits/stdc++.h>

using namespace std;


int main() {
    string l;
    for (;;) {
        getline(cin, l);
        if (l == "0") {
            break;
        }

        string x = l;
        int n = 10;
        int i = 0;
        while (n > 9) {
            n = 0;
            for (char c : x) {
                n += c - '0';
            }
            x = to_string(n);
            i++;
        }
        if (n % 9 == 0) {
            printf("%s is a multiple of 9 and has 9-degree %d.\n", l.c_str(), i);
        } else {
            printf("%s is not a multiple of 9.\n", l.c_str());
        }
    }

    return 0;
}