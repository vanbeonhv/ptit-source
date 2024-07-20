#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, m;
vector<int> ke[200005];
int visited[200005];
int tplt[200005];
int dem = 0;

void nhap() {
	cin >> n >> m;
	for(int i = 1; i <= m; i++) {
		int x, y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i = 1; i <= n; i++) {
		sort(ke[i].begin(), ke[i].end());
	}
}

void DFS(int u) {
	visited[u] = dem;
	for(auto it : ke[u]) {
		if(!visited[it]) {
			DFS(it);
		}
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
	int Q;
	cin >> Q;
	for(int i = 1; i <= n; i++) {
		if(!visited[i]) {
			dem++;
			DFS(i);
		}
	}


	while(Q--) {
		int s, t;
		cin >> s >> t;
		if(visited[s] == visited[t]) {
			cout << 1 << endl;
		} else {
			cout << -1 << endl;
		}
	}
}