#include <bits/stdc++.h>

using namespace std;

int n, a[10005];
int isLast = 0;

//  1, 2, 7,5,4

void generate() {
  int i = n - 1;
  while (i >= 1 && a[i] > a[i + 1]) {
    i--;
  }

  if (i == 0) {
    for (int i = 1; i <= n; i++) {
      a[i] = i;
    }
    isLast = 1;
  } else {
    int j = n;
    while (j > i) {
      if (a[j] > a[i]) {
        swap(a[j], a[i]);
        reverse(a + i + 1, a + n + 1);
        break;
      }
      j--;
    }
  }
}

void show() {
  for (int i = 1; i <= n; i++) cout << a[i] << " ";
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif

  cin >> n;
  for (int i = 1; i <= n; i++) cin >> a[i];
  generate();
  show();
}
