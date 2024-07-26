#include<bits/stdc++.h>

using namespace std;
int main(){
	int n, sum = 0; cin >> n;
	
	while(n){
		int a = n % 10;
		sum += a;
		n /= 10;
	}
	cout << sum;
	return 0;
}