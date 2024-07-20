#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, m;
vector<int> ke[200005];
int visited[200005], parent[200005];

void nhap() {
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    ke[x].push_back(y);
    ke[y].push_back(x);
  }
}

// Để đồ thị có chu trình thì cần kiểm tra có cạnh ngược hay không
// Kiểm tra cạnh ngược bằng cách khi duyệt từng đỉnh
// lại gặp 1 đỉnh đã thăm nhưng không phải là cha trực tiếp của nó
bool dfs(int u) {
  visited[u] = 1;
  for (int v : ke[u]) {
    // v đã bị thăm nhưng v không phải là cha trực tiếp của u
    if (visited[v] == 1 && v != parent[u]) {
      return true;
    }

    if (!visited[v]) {
      parent[v] = u;
      if (dfs(v)) return true;
    }
  }
  return false;
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
  // Kiem tra tren tung thanh phan lien thong
  // Thac mac: tai sao ko duyet tung dinh?
  // TL: duyệt tplt thì dfs sẽ tự duyệt tất các đỉnh trong tplk rồi.
  for (int i = 1; i <= n; i++) {
    if (!visited[i]) {
      if (dfs(i)) {
        cout << 1;
        return 0;
      }
    }
  }
  cout << 0;
}