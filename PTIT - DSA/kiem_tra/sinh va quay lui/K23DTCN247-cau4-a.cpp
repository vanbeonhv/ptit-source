// Giai thuat sinh
#include <bits/stdc++.h>

using namespace std;

int n = 5, k = 3, ok, a[1000];

void khoitao() {
  for (int i = 1; i <= k; i++) a[i] = i;
}

void in() {
  for (int i = 1; i <= k; i++) cout << a[i];
  cout << endl;
}

void sinh() {
  int i = k;
  while (i >= 1 && a[i] == n - k + i) {
    i--;
  }

  if (i == 0) {
    ok = 1;
  } else {
    a[i]++;
    for (int j = i + 1; j <= k; j++) {
      a[j] = a[j - 1] + 1;
    }
  }
}

int main() {
  khoitao();
  while (ok == 0) {
    in();
    sinh();
  }
}
