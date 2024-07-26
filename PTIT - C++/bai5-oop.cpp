#include<bits/stdc++.h>

using namespace std;

class soNguyen {
		int n, a[100];
		public: nhap() {
			cin >> n;
			for(int i = 0; i < n; i++) {
				cin >> a[i];
			}
		}

		public: soChan(vector<int> &b) {
			for(int i = 0; i < n; i++) {
				if(a[i] % 2 == 0) {
					b.push_back(a[i]);
				}
			}
		}

};


int main() {

	int k;
	cin >> k;
	while(k--) {
		soNguyen d;
		d.nhap();
		vector<int> b;
		d.soChan(b);
		for(int c: b) {
			cout << c << " ";
		}
		cout << endl;
	}

	return 0;
}
