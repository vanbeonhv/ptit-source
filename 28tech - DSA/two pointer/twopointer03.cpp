#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
#endif
	int n, m;
	cin >> n >> m;
	int a[n], b[m];

	for (int &x : a) cin >> x;
	for (int &x : b) cin >> x;

	int i = 0, j = 0, total = 0, cnt = 0;

	while (i < n && j < m) {
		if (a[i] == b[j]) {
			cnt++;
			i++;
		} else if (a[i] > b[j]) {
			total += cnt;
			if (b[j] != b[j + 1]) {
				cnt = 0;
			}
			j++;

		} else if (a[i] < b[j]) {
			i++;
		}
	}

	while(j < m) {
		if(a[i - 1] == b[j]) {
			cnt++;
		} else {
			total += cnt;
			
			if (b[j] != b[j + 1]) {
				cnt = 0;
			}
		}
		j++;
	}
	cout << total;
}
