#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif
  stack<int> st;
  string s;
  cin >> s;
  for (char c : s) {
    if (c == '(' || c == '[' || c == '{') {
      st.push(c);
    } else {
      if (st.empty()) {
        cout << "NO";
        return -1;
      }

      char t = st.top();
      if ((c == ')' && t == '(') || (c == ']' && t == '[') ||
          (c == '}' && t == '{')) {
        st.pop();
      } else {
        cout << "NO";
        return -1;
      }
    }
  }

  if (st.empty())
    cout << "YES";
  else
    cout << "NO";

  return -1;
}