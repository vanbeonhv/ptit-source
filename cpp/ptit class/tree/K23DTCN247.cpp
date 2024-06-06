#include <bits/stdc++.h>

using namespace std;

struct Node {
  int data;
  struct Node *left;
  struct Node *right;
};

// typedef Node *TREE;

void KhoiTaoCay(Node *&t) { t = NULL; };

void ThemNodeVaoCay(Node *&t, int x) {
  if (t == NULL) {
    Node *p = new Node();
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    t = p;
  } else {
    if (x < t->data) {
      ThemNodeVaoCay(t->left, x);
    } else if (x > t->data) {
      ThemNodeVaoCay(t->right, x);
    }
  }
};

void Duyet_NLR(Node *t) {
  if (t != NULL) {
    cout << t->data << " ";
    Duyet_NLR(t->left);
    Duyet_NLR(t->right);
  }
}

void Duyet_NRL(Node *t) {
  if (t != NULL) {
    cout << t->data << " ";
    Duyet_NRL(t->right);
    Duyet_NRL(t->left);
  }
}

void Duyet_LRN(Node *t) {
  if (t != NULL) {
    Duyet_LRN(t->left);
    Duyet_LRN(t->right);
    cout << t->data << " ";
  }
}

Node *TimKiem(Node *t, int x) {
  if (t == NULL) {
    return NULL;
  } else {
    if (x < t->data) {
      TimKiem(t->left, x);
    } else if (x > t->data) {
      TimKiem(t->right, x);
    } else {
      return t;
    }
  }
}

void HuyCay(Node *&t) {
  if (t != NULL) {
    HuyCay(t->left);
    HuyCay(t->right);
    delete t;
    t = NULL;
  }
}

void Menu(Node *&t) {
  while (true) {
    cout << "\n\n =====MENU=====";
    cout << "\n 1.Them phan tu vao cay";
    cout << "\n 2.Duyet cay theo NLR";
    cout << "\n 3.Duyet cay theo NRL";
    cout << "\n 4.Duyet cay theo LRN";
    cout << "\n 5.Tim kiem";
    cout << "\n 6.Huy cay";
    cout << "\n 0. Ket thuc";
    cout << "\n ==============";

    int luachon;
    cout << "\nNhap lua chon: ";
    cin >> luachon;
    if (luachon < 0 || luachon > 7) {
      cout << "\nLua chon khong hop le";
    } else if (luachon == 1) {
      int x;
      cout << "\nNhap phan tu muon them: ";
      cin >> x;
      ThemNodeVaoCay(t, x);
    } else if (luachon == 2) {
      cout << "\nDuyet cay theo NLR: \n";
      Duyet_NLR(t);
    } else if (luachon == 3) {
      cout << "\nDuyet cay theo NRL: \n";
      Duyet_NRL(t);
    } else if (luachon == 4) {
      cout << "\nDuyet cay theo LRN: \n";
      Duyet_LRN(t);
    } else if (luachon == 5) {
      cout << "\nNhap phan tu can tim kiem: \n";
      int x;
      cin >> x;
      Node *p = TimKiem(t, x);
      if (p == NULL) {
        cout << "\nPhan tu " << x << " khong ton tai trong cay";
      } else {
        cout << "\nPhan tu " << x << " co ton tai trong cay";
      }
    } else if (luachon == 6) {
      HuyCay(t);
      cout << "Cay da duoc huy.\n";
    } else {
      cout << "Ket thuc chuong trinh";
      break;
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
//  freopen("../input.txt", "r", stdin);
//  freopen("../output.txt", "w", stdout);
#endif
  Node *tree;
  KhoiTaoCay(tree);
  Menu(tree);
}