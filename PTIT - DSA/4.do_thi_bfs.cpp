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

void BFS(int x){
	queue<int> q;
	q.push(x);
	visited[x] = 1;

	
	while(!q.empty()){
		int y = q.front();
		q.pop();
		cout << y << " ";
		for(int i : ke[y]){
			if(!visited[i]){
				q.push(i);
				visited[i] = 1;	
			}	
		}
	}
}

int main() {
	freopen("dsk.in", "r", stdin);
	cin >> n;
	cin.ignore();
	khtao();
	
	BFS(1);
	
	return 0;
}