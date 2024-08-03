#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> ke[1005];

int main(){
	
	freopen("dsc.in","r",stdin);
	freopen("dsk.out", "w",stdout);
	
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
//		ke[y].push_back(x);
	}
	
	for(int i = 1; i <= n; i++){
		sort(ke[i].begin(), ke[i].end());
		cout << i << ": ";
		for(int j : ke[i]) cout << j << " ";
		cout << endl;
	}
	
	return 0;
}