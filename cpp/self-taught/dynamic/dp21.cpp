#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../../input.txt", "r", stdin);
	freopen("../../output.txt", "w", stdout);
#endif
	
	int n, S = 0; cin >> n;
	int a[n]; 
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		S += a[i];
	}
	
	int F[S + 1] = {0}; F[0] = 1;
	
	for(int i = 0; i < n; i++){
		for(int j = S; j >= a[i]; j--){
			if(F[j - a[i]] == 1) F[j] = 1;
		}
	}
	
	for(int i = 0; i <= S; i++){
		if(F[i] == 1) cout << i << " ";
	}
	return 0;                              
}