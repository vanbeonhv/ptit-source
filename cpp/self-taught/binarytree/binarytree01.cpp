#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

struct node {
  int data;
  node *left;
  node *right;
  // constructor
  node(int x) {
    data = x;
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
  if (root->data == u) {
    makeRoot(root, u, v, c);
  } else {
    insertNode(root->left, u, v, c);
    insertNode(root->right, u, v, c);
  }
}

void inOrder(node *root) {
  if (root != NULL) {
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
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

  node *root = NULL;
  int n;
  cin >> n;
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
  inOrder(root);
}