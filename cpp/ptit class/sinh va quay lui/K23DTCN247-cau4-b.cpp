#include <bits/stdc++.h>

using namespace std;

int n = 5, k = 3, a[1000], b[1000];

void in() {
  for (int i = 1; i <= k; i++) cout << a[i] << " ";
  cout << endl;
}

void Try(int i) {
  for (int j = i; j <= n - k + i; j++) {
    if (a[i - 1] < j) {
      a[i] = j;
      if (i == k) {
        in();
      } else {
        Try(i + 1);
      }
    }
  }
}

int main() { Try(1); }