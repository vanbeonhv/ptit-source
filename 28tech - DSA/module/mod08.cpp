#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

ll a[1000005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	ll mod = 1e9 + 7;

	a[1] = 2;
	a[2] = 8;
	for(int i = 3; i <= 1000000; i++){
		a[i] = 2 * a[i-1] + 8 * a[i-2];
		a[i] %= mod;
	}
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << a[n] << endl;
	}
}
