// Giai thuat sinh
#include <bits/stdc++.h>

using namespace std;

int n, a[1000], ok;

void in() {
  for (int i = 1; i <= n; i++) cout << a[i];
  cout << endl;
}

void sinh() {
  int i = n;
  while (i >= 1 && a[i] == 1) {
    a[i] = 0;
    i--;
  }

  if (i == 0) {
    ok = 1;
  } else {
    a[i] = 1;
  }
}

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    a[i] = 0;
  }
  while (ok == 0) {
    in();
    sinh();
  }
}