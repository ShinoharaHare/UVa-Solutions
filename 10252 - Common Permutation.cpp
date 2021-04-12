#include <bits/stdc++.h>

using namespace std;


int main() {
    string a, b;

    while (getline(cin, a) && getline(cin, b)) {
        for (int offset = 0; offset < 26; offset++) {
            int alphabet = 'a' + offset;
            int ac = count(a.begin(), a.end(), alphabet);
            int bc = count(b.begin(), b.end(), alphabet);
            cout << string(min(ac, bc), alphabet);
        }
        cout << endl;
    }

    system("pause");
    return 0;
}