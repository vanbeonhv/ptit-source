#include<bits/stdc++.h>

using namespace std;

string s;

void sinh() {
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1') {
        s[i] = '0';
        i--;
    }

    if (i >= 0) {
        s[i] = '1';
    }
}


int main() {
    cin >> s;
    sinh();
    cout << s;
    return 0;
}
