#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;
int height, cnt;

struct node {
	int val;
	node *left;
	node *right;
	node(int x) {
		val = x;
		left = right = NULL;
	}
};

void makeRoot(node *root, int u, int v, char c) {
	if (c == 'L') {
		root->left = new node(v);
	} else {
		root->right = new node(v);
	}
}

void insertNode(node *root, int u, int v, char c) {
	if (root == NULL) return;
	if (root->val == u) {
		makeRoot(root, u, v, c);
	} else {
		insertNode(root->left, u, v, c);
		insertNode(root->right, u, v, c);
	}
}

void countHeight(node *root) {
	cnt++;

	if(root == NULL) {
//		cout << "cnt: " << cnt << endl;
		height = max(height, cnt);
		return;
	}

	for(int i = 0; i <= 1; i++) {
		if(i == 0) {
			countHeight(root->left);
			cnt--;
		}

		if(i == 1) {
			countHeight(root->right);
			cnt--;
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

	int n;
	cin >> n;
	node *root = NULL;
	for (int i = 0; i < n; i++) {
		int u, v;
		char c;
		cin >> u >> v >> c;
		if (root == NULL) {
			root = new node(u);
			makeRoot(root, u, v, c);
		} else {
			insertNode(root, u, v, c);
		}
	}


	countHeight(root);
	cout << height - 2;
}
