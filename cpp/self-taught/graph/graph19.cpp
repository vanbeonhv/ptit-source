#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, m;
vector<int> ke[200005];
int visited[200005];
int dem = 0;
int tplk[200005];

void nhap() {
	cin >> n >> m;
	for(int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}

void dfs(int u) {
	tplk[u] = dem;
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

	int result = 0;
	for(int i = 1; i <= n; i++) {
		memset(visited, 0, sizeof(visited));
		visited[i] = 1;
		int cnt = 0;
		for(int i = 1; i <= n; i++){
			if(!visited[i]){
				cnt++;
				dfs(i);
			}
		}
		if(cnt > dem){
			result++;
		}
	}

	cout <<result;
}