#include <bits/stdc++.h>

using namespace std;

int X[100], n, k;

void Try(int i) {
  for (int j = X[i - 1] + 1; j <= n - k + i; j++) {
    X[i] = j;
    if (i == n) {
      for (int m = 1; m <= n; m++) {
        cout << X[m] << " ";
      }
      cout << endl;
    } else {
      Try(i + 1);
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif
  cin >> n >> k;
  X[0] = 0;
  Try(1);
}