#include <bits/stdc++.h>

using namespace std;

string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

int main() {
    string s, a;
    getline(cin, s);

    for (char c : s) {
        int i = keyboard.find(tolower(c));
        if (i != string::npos) {
            a += keyboard[i - 2];
        } else {
            a += c;
        }
    }

    cout << a << endl;

    system("pause");
    return 0;
}