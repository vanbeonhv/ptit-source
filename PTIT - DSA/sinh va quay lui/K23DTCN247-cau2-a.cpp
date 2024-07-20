// Giai thuat sinh
#include <bits/stdc++.h>

using namespace std;

int n, k, a[1000], ok;

void khoitao() {
  for (int i = 1; i <= k; i++) a[i] = 1;
}

void in() {
  for (int i = 1; i <= k; i++) cout << a[i] << " ";
  cout << endl;
}

void sinh() {
  int i = k;
  while (i >= 1 && a[i] == n) {
    i--;
  }

  if (i == 0) {
    ok = 1;
  } else {
    a[i]++;
    for (int j = i + 1; j <= k; j++) {
      a[j] = 1;
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  cin >> n >> k;
  khoitao();
  while (!ok) {
    in();
    sinh();
  }
}