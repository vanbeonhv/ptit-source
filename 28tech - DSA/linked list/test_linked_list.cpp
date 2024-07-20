#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

struct node {
  int data;
  node *next;
};

node *makeNode(int x) {
  node *newNode = new node();
  newNode->data = x;
  newNode->next = NULL;
  return newNode;
}

void duyet(node *head) {
  while (head != NULL) {
    cout << head->data << ' ';
    head = head->next;
  }
}

void themDau(node *&head, int x) {
  node *y = makeNode(x);
  y->next = head;
  head = y;
}

void themCuoi(node *&head, )

    int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  node *head = NULL;
  for (int i = 1; i <= 5; i++) {
    themDau(head, i);
  }

  duyet(head);
}