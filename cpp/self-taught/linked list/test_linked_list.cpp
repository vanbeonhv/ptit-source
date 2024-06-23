#include <bits/stdc++.h>

using namespace std;

struct Node {
  int data;
  Node *next;
};

Node *make_node(int i) {
  Node *head = new Node();
  head->data = i;
  head->next = NULL;
  return head;
}

int Size(Node *head) {
  int n = 0;
  while (head != NULL) {
    n++;
    head = head->next;
  }
  return n;
}

void insertFirst(Node **head, int x) {
  Node *node = make_node(x);
  if (*head == NULL) {
    *head = node;
  } else {
    node->next = *head;
    *head = node;
  }
}

void show(Node *head) {
  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
}

// void insert(Node **head, int i, int x) {
//   if (*head == NULL) {
//     ins
//   }
// }

int main() {
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif

  Node *head = NULL;
  insertFirst(&head, 2);
  insertFirst(&head, 3);
  show(head);
  cout << "\nsize: " << Size(head);

  return 0;
}
