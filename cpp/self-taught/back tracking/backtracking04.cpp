#include <bits/stdc++.h>

using namespace std;

int X[100], a[100], n, k, tong;

void nhap() {
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a + 1, a + n + 1);
}

void Try(int i, int pos, int sum) {
  for (int j = pos; j <= n; j++) {
    X[i] = a[j];
    tong += a[j];
    if (tong == k) {
      cout << "[";
      for (int l = 1; l <= i; l++) {
        cout << X[l];
        if (l == i)
          cout << "]";
        else
          cout << " ";
      }
      cout << endl;
    } else if (tong < k) {
      Try(i + 1, j + 1, tong);
    }
    tong -= a[j];
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif

  nhap();
  Try(1, 1, 0);
}