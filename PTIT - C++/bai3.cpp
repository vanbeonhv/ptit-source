#include<bits/stdc++.h>

using namespace std;

int count(int n){
	int cnt = 0;
	while(n){
		cnt++;
		n /= 10;
	}
	return cnt;
}

int main(){
	int n; cin >> n;
	cout << count(n);
	return 0;
}