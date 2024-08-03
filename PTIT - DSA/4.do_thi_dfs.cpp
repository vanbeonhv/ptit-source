#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> ke[200005];
int visited[200005];

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

void DFS(int x) {
//	cout << x << " ";
	visited[x] = 1;
	for(int i: ke[x]) {
		if(!visited[i]) {
			DFS(i);
		}
	}
}

int main() {

	freopen("dsk.in", "r", stdin);
	cin >> n;
	cin.ignore();
	khtao();
	
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			dem++;
			DFS(i);
		}
	}
	
	cout << dem;

	return 0;
}