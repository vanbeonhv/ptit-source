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

  string s;
  cin >> s;
  s = "0" + s;
  int n = s.size();
  int F[1005][1005];
  int max_len = 0;
  for (int len = 1; len <= n; len++) {
    for (int i = 1; i + (len - 1) <= n; i++) {
      int j = i + (len - 1);
      if (len == 1) {
        F[i][j] = 1;
      } else if (len == 2) {
        F[i][j] = s[i] == s[j];
      } else {
        F[i][j] = F[i + 1][j - 1] && s[i] == s[j];
      }
      if (F[i][j]) max_len = len;
    }
  }
  cout << max_len;
}