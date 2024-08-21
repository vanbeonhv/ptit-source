#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

ll getSum(int a[], int n){
	ll sum = 0;
	for(int i = 0; i <= n; i++){
		sum += a[i];
	}
	return sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, s; cin >> n >> s;
	int a[n];
	for(int &x : a) cin >> x;
	
	int max_len = 0;
	int left = 0;
	ll sum = 0;
	for(int right = 0; right < n; right++){
		sum += a[right];
		while(sum > s){
			sum -= a[left];
			left++;
		}
		max_len = max(max_len, right - left + 1);
	}
	cout << max_len;
}
