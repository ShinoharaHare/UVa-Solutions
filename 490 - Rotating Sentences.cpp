#include <bits/stdc++.h>

using namespace std;


int main() {
    vector<string> sentences;
    string s;

    size_t maxLen = 0;
    while (getline(cin, s)) {
        maxLen = max(s.length(), maxLen);
        sentences.push_back(s);
    }

    for (int row = 0; row < maxLen; row++) {
        for (int i = sentences.size() - 1; i >= 0; i--) {
            if (row < sentences[i].length()) {
                cout << sentences[i][row];
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    system("pause");
    return 0;
}