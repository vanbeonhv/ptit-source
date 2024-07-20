#include <bits/stdc++.h>

using namespace std;

int n, a[1000], b[1000];

void in() {
  for (int i = 1; i <= n; i++) cout << a[i] << " ";
  cout << endl;
}

void Try(int i) {
  for (int j = 1; j <= n; j++) {
    if (b[j] == 0) {
      a[i] = j;
      b[j] = 1;

      if (i == n) {
        in();

      } else {
        Try(i + 1);
      }
      b[j] = 0;
    }
  }
}

int main() {
  cin >> n;
  Try(1);
}