#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	int a, b;
	cin >> a >> b;
	ll ans = 1;
	ll mod = 1e9 + 7;
	for(int i = 1; i <= b; i++){
		ans *= a % mod;
		ans %= mod;
	}
	cout << ans;
}
