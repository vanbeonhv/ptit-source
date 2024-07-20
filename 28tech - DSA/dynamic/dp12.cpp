#include <bits/stdc++.h>

using namespace std;


int main() {
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int a[n], F[n];
	for(int i = 0; i < n ; i++) {
		cin >> a[i];
	}
	
	for(int i = 0; i < n; i++){
		F[i] = a[i];
		for(int j = 0; j < i; j++){
			if(a[i] > a[j]){
				F[i] = max(F[i], F[j] + a[i]);
			}
		}
	}
	
	cout << *max_element(F, F + n);
}

