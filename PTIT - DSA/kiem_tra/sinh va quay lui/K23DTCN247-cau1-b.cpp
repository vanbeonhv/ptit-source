// Quay lui
#include <bits/stdc++.h>

using namespace std;

int n, a[1000];

void in() {
  for (int i = 1; i <= n; i++) cout << a[i] << " ";
  cout << endl;
}

void Try(int x) {
  for (int j = 0; j <= 1; j++) {
    a[x] = j;
    if (x == n) {
      in();
    } else {
      Try(x + 1);
    }
  }
}

int main() {
  cin >> n;
  Try(1);
};