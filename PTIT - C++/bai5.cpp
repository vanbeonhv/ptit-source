#include<bits/stdc++.h>

using namespace std;

void soChan(int a[], int n, vector<int> &b) {
	for(int i = 0; i < n; i++) {
		if(a[i] % 2 == 0) {
			b.push_back(a[i]);
		}
	}
}

int main() {
	int k;
	cin >> k;
	while(k--) {
		int a[100];
		vector<int> b;
		int n;
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}

		soChan(a, n, b);
		for(int num : b){
			cout << num << " ";
		}
		cout << endl;
	}

	return 0;
}
