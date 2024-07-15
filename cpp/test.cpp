#include <bits/stdc++.h>

#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, m, step;
int result = 100000;

void dfs(int x) {
    if (x > n) return;
    if (x == n) {
        if (step % m == 0) {
            result = min(step, result);
        }
        return;
    }

    for (int i = 1; i <= 2; i++) {
        x += i;
        step++;
        dfs(x);
        step--;
        x -= i;
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    stack<char> st;
    queue<char> q;
    for (int i = 1; i < s.size() - 1; i++) {
        if (s[i] != ')') {
            st.push(s[i]);
        } else {
            // if (!st.empty()) {
            char charTop = st.top();
            while (charTop != '(') {
                st.pop();
                q.push(charTop);
                charTop = st.top();
            }
            // }
            // remove '('
            st.pop();

            while (!q.empty()) {
                char charFront = q.front();
                q.pop();
                st.push(charFront);
            }
        }
    }

    string result = "";
    while (!st.empty()) {
        char c = st.top();
        st.pop();
        result += c;
    }
    cout << result;
}