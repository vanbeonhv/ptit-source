#include <bits/stdc++.h>

using namespace std;

int n = 2, k = 3, a[3] = {1};

void in() {
  for (int i = 1; i <= k; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void Try(int i) {
  for (int j = 1; j <= n; j++) {
    a[i] = j;
    if (i == k) {
      in();
    } else {
      Try(i + 1);
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  Try(1);
}