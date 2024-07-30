#include <bits/stdc++.h>
using namespace std;

struct CanBo {
  long MaSo;
  char HoTen[8];
};

struct Node {
  CanBo Info;
  Node *Next;
};

struct DanhSach {
  Node *PFirst, *PLast;
};

Node *makeNode(CanBo cb) {
  Node *head = new Node();
  head->Info = cb;
  head->Next = NULL;
  return head;
}

int main() {
  // Node *head = makeNode();
  while (true) {
    int selection;
    cin >> selection;
    switch (selection) {
      case 1:
        cout << 1;
    }
  }
  return 0;
}