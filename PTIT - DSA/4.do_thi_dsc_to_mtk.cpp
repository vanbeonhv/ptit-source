#include<bits/stdc++.h>
using namespace std;

int n, m, a[1005][1005];

int main(){
	
	freopen("dsc.in", "r", stdin);
	freopen("mtk.out","w", stdout);
	
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x , y;
		cin >> x >> y;
		a[x][y] = a[y][x] = 1;
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}