#include <bits/stdc++.h>

using namespace std;

int n, a[13][13], ok;
string s;

void input() {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a[i][j];
    }
  }
}

void Try(int i, int j) {
  if (i == n && j == n) {
    cout << s << endl;
    ok = 1;
  }

  if (i + 1 <= n && a[i + 1][j] == 1) {
    s += "D";
    Try(i + 1, j);
    s.pop_back();
  }
  if (j + 1 <= n && a[i][j + 1] == 1) {
    s += "R";
    Try(i, j + 1);
    s.pop_back();
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  cin >> n;
  input();
  Try(1, 1);
  if (!ok) cout << -1;
}