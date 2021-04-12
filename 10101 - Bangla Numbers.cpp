#include <bits/stdc++.h>

using namespace std;

#define CLAMP(x, h) ((x) > h ? (h) : (x))

string f(string s) {
    static const int max[] = {2, 1, 2, 2, -1};
    static const char *unit[] = {"", "shata", "hajar", "lakh", "kuti"};

    string a;

    int l = s.length();
    int cur = l;

    for (int i = 0; i < 5; i++) {
        if (cur > 0) {
            int n = CLAMP(max[i], cur);
            n = n < 0 ? cur : n;

            string tmp = s.substr(cur - n, n);
            int x = stol(tmp);

            if (x != 0) {
                if (!a.empty()) {
                    a = " " + a;
                }

                if (i == 4 && n > 2) {
                    a = f(tmp) + " " + unit[i] + a;
                } else if (i != 0) {
                    a = to_string(x) + " " + unit[i] + a;
                } else {
                    a = to_string(x) + a;
                }
            }
            
            cur -= n;
        }
    }
    return a.empty() ? "0" : a;
}

int main() {
    string s;
    int i = 1;
    while (cin >> s) {
        printf("%4d. %s\n", i++, f(s).c_str());
    }

    // cout << f("23764") << endl;
    system("pause");
    return 0;
}