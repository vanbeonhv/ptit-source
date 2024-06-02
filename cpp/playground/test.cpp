#include <bits/stdc++.h>

using namespace std;

int n, a[1000];

void khtao() {
  for (int i = 1; i <= n; i++) cin >> a[i];
}

void sinh() {
  int i = n - 1;
  while (i >= 1 && a[i] > a[i + 1]) {
    i--;
  }

  if (i == 0) {
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
  } else {
    int j = n;
    while (j > i && a[j] < a[i]) {
      j--;
    }
    swap(a[i], a[j]);
    sort(a + i + 1, a + n + 1);
  }
}

void in() {
  for (int i = 1; i <= n; i++) cout << a[i];
  cout << endl;
}

int main() {
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif

  cin >> n;
  khtao();
  sinh();
  in();
}