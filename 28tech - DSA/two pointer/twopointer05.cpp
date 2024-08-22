#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

#Tu duy nguoc. Duyet tu phai ve trai

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, s;
	cin >> n >> s;
	int a[n];
	for(int &x : a) cin >> x;
	int min_x = INT_MAX;

	int l = n - 2;
	int sum = a[n - 1];
	for(int r = n - 1; r >= 0; r--) {

		while(sum < s && l >= 0) {
			sum += a[l];
			l--;
		}

		if(sum >= s) {
			min_x = min(r - l, min_x);
		}
		sum -= a[r];
	}
	cout << min_x;
}
