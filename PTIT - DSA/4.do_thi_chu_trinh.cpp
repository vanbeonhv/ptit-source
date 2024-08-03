#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> ke[200005];
int visited[200005], parent[200005];

void khtao() {
	for(int i = 1; i <= n; i++) {
		string line;
		getline(cin, line);
		stringstream ss(line);
		string temp;
		while(ss >> temp) {
			ke[i].push_back(stoi(temp));
		}
		sort(ke[i].begin(), ke[i].end());
	}
}

bool dfs(int u){
	visited[u] = 1;
	for(int v : ke[u]){
		if(visited[v] == 1 && parent[u] != v) return true;
		if(!visited[v]){
			parent[v] = u;
			if(dfs(v)) return true; 
		} 
	}
	return false;
}

int main() {
	freopen("dsk.in", "r", stdin);
	cin >> n;
	cin.ignore();
	khtao();
	
	//Goi dfs o tat ca tplt
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			if(dfs(i)){
				cout << "YES";
				return 0;
				
			}
		}
	}
	cout << "NO";
	

	return 0;
}