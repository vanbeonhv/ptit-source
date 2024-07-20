#include<bits/stdc++.h>

using namespace std;

int a[1000], n, k;

void create() {
    for (int i = 1; i <= k; i++) cin >> a[i];
}

void generate() {
    int i = k;
    while (i >= 1 && a[i] == n - k + i) {
        i--;
    }

    if (i == 0) {
        for (int j = 1; j <= k; j++) a[j] = j;
    } else {
        a[i]++;
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }

}


int main() {
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    cin >> n >> k;
    create();
    generate();
    for (int i = 1; i <= k; i++) cout << a[i] << " ";
    cout << "test";
}