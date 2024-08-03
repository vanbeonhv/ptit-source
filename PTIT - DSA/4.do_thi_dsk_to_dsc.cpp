#include<bits/stdc++.h>
using namespace std;

int n;

int main() {

	freopen("dsk.in", "r",stdin);
	freopen("dsc.out", "w",stdout);
	
	cin >> n;
	for(int i = 1; i <= n; i++){
		string line;
		getline(cin,line);
		stringstream ss(line);
		string temp;
		while(ss >> temp){
			int x = stoi(temp);
			if(x > i) cout << i << " " << x << endl;
		}
	}
	return 0;
}