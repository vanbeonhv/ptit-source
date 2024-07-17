#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

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

void spiral(node *root) {
  stack<node *> s1, s2;
  s1.push(root);
  while (!s1.empty() || !s2.empty()) {
    while (!s1.empty()) {
      node *tmp = s1.top();
      s1.pop();
      cout << tmp->val << " ";
      if (tmp->right != NULL) {
        s2.push(tmp->right);
      }
      if (tmp->left != NULL) {
        s2.push(tmp->left);
      }
    }

    while (!s2.empty()) {
      node *tmp = s2.top();
      s2.pop();
      cout << tmp->val << " ";

      if (tmp->left != NULL) {
        s1.push(tmp->left);
      }

      if (tmp->right != NULL) {
        s1.push(tmp->right);
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
  spiral(root);
}