#include <bits/stdc++.h>

using namespace std;

int n, a[10][10], ok;
string s;
char last;

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
    a[i + 1][j] = 0;
    Try(i + 1, j);
    s.pop_back();
    a[i + 1][j] = 1;
  }

  if (j - 1 > 0 && a[i][j - 1] == 1) {
    s += "L";
    a[i][j - 1] = 0;
    Try(i, j - 1);
    s.pop_back();
    a[i][j - 1] = 1;
  }

  if (j + 1 <= n && a[i][j + 1] == 1) {
    s += "R";
    a[i][j + 1] = 0;
    Try(i, j + 1);
    s.pop_back();
    a[i][j + 1] = 1;
  }

  if (i - 1 > 0 && a[i - 1][j] == 1) {
    s += "U";
    a[i - 1][j] = 0;
    Try(i - 1, j);
    s.pop_back();
    a[i - 1][j] = 1;
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  cin >> n;
  input();
  a[1][1] = 0;
  Try(1, 1);
  if (!ok) cout << -1;
}