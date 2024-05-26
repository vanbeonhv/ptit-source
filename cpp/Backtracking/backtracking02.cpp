#include <bits/stdc++.h>

using namespace std;

int n, a[100][100];
string s;

void nhap() {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a[i][j];
    }
  }
}

void Try(int i, int j, string s) {
  if (i == n && j == n) {
    cout << s << endl;
  }

  if (i + 1 <= n && a[i + 1][j] == 1) {
    s += "D";
    Try(i + 1, j, s);
    s.pop_back();
  }

  if (j + 1 <= n && a[i][j + 1] == 1) {
    s += "R";
    Try(i, j + 1, s);
    s.pop_back();
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif
  cin >> n;
  nhap();
  Try(1, 1, "");
}