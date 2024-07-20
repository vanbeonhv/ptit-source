#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, m, s, t;
vector<int> ke[200005];

int parent[200005];
int visited[200005];

void nhap() {
	cin >> n >> m >> s >> t;
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

void bfs(int u) {
	queue<int> q;
	q.push(u);
	visited[u] = 1;
	
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int i: ke[x]){
			if(!visited[i]){
				visited[i] = 1;
				q.push(i);
				parent[i] = x;
			}
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
	bfs(s);
	vector<int> v;
	if(!visited[t]) {
		cout << -1;
	} else {
		v.push_back(t);
		while(s != t) {
			t = parent[t];
			v.push_back(t);
		}
		reverse(v.begin(), v.end());
		for(int x : v) cout << x << " ";
	}
}