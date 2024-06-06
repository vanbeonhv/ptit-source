#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif

  int n;
  cin >> n;
  int a[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  int b[n + 1];
  for (int i = 1; i <= n; i++) {
    b[i] = i;
  }

  int cnt = 0;
  int res = 0;
  do {
    cnt++;
    bool isMatch = true;
    for (int j = 1; j <= n; j++) {
      if (a[j] != b[j]) {
        isMatch = false;
        break;
      }
    }
    if (isMatch) {
      res = cnt;
      break;
    }

    // for (int j = 1; j <= n; j++) cout << b[j] << " ";
    // cout << endl;
  } while (next_permutation(b + 1, b + n + 1));

  cout << res;
}