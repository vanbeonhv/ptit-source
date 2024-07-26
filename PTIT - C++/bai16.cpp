#include<bits/stdc++.h>
using namespace std;

class xau{
	string s;
	public:
		void nhap(){
			getline(cin, s);
		}
		int soTu(){
			int count = 0;
			stringstream ss(s);
			string temp;
			while(ss >> temp){
				count++;
			}
			return count;
		}
};

int main(){
	int k; cin >> k;
	cin.ignore();
	while(k--){
		xau d;
		d.nhap();
		cout << d.soTu() << endl;
	}
	return 0;
}
