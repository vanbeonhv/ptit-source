#include <bits/stdc++.h>
#define MAX 100

using namespace std;

struct DoThi {
  int v, e;
  int MTK[MAX][MAX];
};

void khoiTaoMtk(DoThi &g) {
  for (int i = 1; i <= g.v; i++) {
    for (int j = 1; j <= g.v; j++) {
      g.MTK[i][j] = 0;
    }
  }
}

void nhapMaTranKe(DoThi &g) {
  ifstream f("dsk.txt");
  f >> g.v;

  khoiTaoMtk(g);

  string s;
  for (int i = 0; i <= g.v; i++) {
    getline(f, s);

    for (char c : s) {
      if (c != ' ') {
        int j = c - 48;
        cout << j << " ";
        g.MTK[i][j] = 1;
        g.MTK[j][i] = 1;
      }
    }
    cout << endl;
  }

  f.close();
}

void hienMaTranKe(DoThi &g) {
  ofstream f("mtk2.txt");
  f << g.v << endl;
  for (int i = 1; i <= g.v; i++) {
    for (int j = 1; j <= g.v; j++) {
      f << g.MTK[i][j] << " ";
    }
    f << endl;
  }
  f.close();
}

int tinhCanh(DoThi &g) {
  int edges = 0;
  for (int i = 1; i <= g.v; i++) {
    for (int j = i + 1; j <= g.v; j++) {
      if (g.MTK[i][j] == 1) edges++;
    }
  }
  return edges;
}

void hienDanhSachCanh(DoThi &g) {
  ofstream f("dsc2.txt");

  f << g.v << " " << tinhCanh(g) << endl;
  for (int i = 1; i <= g.v; i++) {
    for (int j = i + 1; j <= g.v; j++) {
      if (g.MTK[i][j] == 1) {
        f << i << " " << j << endl;
      }
    }
  }
  f.close();
}

int main() {
  DoThi g;
  nhapMaTranKe(g);
  hienMaTranKe(g);
  hienDanhSachCanh(g);
}