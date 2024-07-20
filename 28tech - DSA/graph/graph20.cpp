#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, m;
set<int> ke[200005];
vector<pair<int, int>> dscanh;
int visited[200005];
int dem = 0;

void nhap() {
	cin >> n >> m;
	for(int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		ke[x].insert(y);
		ke[y].insert(x);
		dscanh.push_back({x, y});
	}
}

void dfs(int u) {
	visited[u] = 1;
	for(int i : ke[u]) {
		if(!visited[i]) dfs(i);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("../../input.txt", "r", stdin);
	freopen("../../output.txt", "w", stdout);
#endif

	nhap();
	
	for(int i = 1; i <= n; i++) {
		if(!visited[i]) {
			dem++;
			dfs(i);
		}
	}

	int canh_cau = 0;
	for(auto it : dscanh) {
		//loai bo canh x, y trong danh sach ke
		int x = it.first, y = it.second;
		memset(visited, 0, sizeof(visited));
		ke[x].erase(y);
		ke[y].erase(x);
		
		//Dem lai tplt sau khi loai bo canh x, y
		int cnt = 0;
		for(int i = 1; i <= n; i++){
			if(!visited[i]){
				cnt++;
				dfs(i);
			}
		}
		
		if(cnt > dem) canh_cau++;
		ke[x].insert(y);
		ke[y].insert(x);
	}

	cout << tru;
}