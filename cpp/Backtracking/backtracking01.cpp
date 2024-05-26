#include <bits/stdc++.h>

using namespace std;

int n, k, s, cnt, sum, a[100], X[100];

void nhap() {
  cin >> n >> k >> s;
  for (int i = 1; i <= k; i++) a[i] = i;
}

void show() {
  for (int i = 1; i <= k; i++) cout << X[i] << " ";
  cout << endl;
}

void Try(int i, int sum) {
  for (int j = i; j < n - k + i; j++) {
    X[i] = a[j];
    sum += a[j];

    if (i == k) {
      show();
      if (sum == s) {
        cnt++;
      } else {
        sum -= a[j];
      }
    } else {
      Try(i + 1, sum);
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif

  nhap();
  Try(1, 0);
  cout << cnt;
}