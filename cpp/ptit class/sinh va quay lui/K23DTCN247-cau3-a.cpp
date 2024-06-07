#include <bits/stdc++.h>

using namespace std;

int n, ok, a[1000];

void khoitao(){
	for(int i = 1; i <= n; i++) a[i] = i;
}

void in(){
	for(int i = 1; i <= n; i++) cout << a[i];
	cout << endl;
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] > a[i+1]){
		i--;
	}
	if(i == 0){
		ok = 1;
	}else {
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i], a[j]);
		reverse(a + i + 1, a +n+1);
	}
}
int main() {
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

	cin >> n;
	khoitao();
	while(ok == 0){
		in();
		sinh();
	}
	
}
