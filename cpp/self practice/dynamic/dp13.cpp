#include <bits/stdc++.h>

using namespace std;


int main() {
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int a[n], L[n], R[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	
	for(int i = 0; i < n; i++){
		L[i] = a[i];
		for(int j = 0; j < i; j++){
			if(a[i] >a[j]){
				L[i] = max(L[i], L[j] + a[i]); 
			}
		}
	}
	
	for(int i = n - 1; i >= 0; i--){
		R[i] = a[i];
		for(int j = n - 1; j > i; j--){
			if(a[i] > a[j]){
				R[i] = max(R[i], R[j] + a[i]);
			}
		}
	}
	
	int res = 0;
	for(int i = 0; i < n; i++){
		res = max(res, L[i] + R[i] - a[i]);
	}
	cout << res; 
}

