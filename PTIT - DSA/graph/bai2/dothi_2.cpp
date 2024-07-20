#include <bits/stdc++.h>

#define MAX 100
using namespace std;

struct DoThi {
  int v, e;
  int MTK[MAX][MAX];
};

struct Mtk {};

void nhap(DoThi &g) {
  ifstream f("dsc.txt");
  f >> g.v >> g.e;

  for (int i = 1; i <= g.e; i++) {
    for (int j = 1; j <= g.e; j++) {
      g.MTK[i][j] = 0;
    }
  }

  int u, v;
  for (int i = 1; i <= g.e; i++) {
    f >> u >> v;
    g.MTK[u][v] = 1;
    g.MTK[v][u] = 1;
  }

  f.close();
}

void hienMaTranKe(DoThi &g) {
  ofstream f("mkt1.txt");
  f << g.v << endl;
  for (int i = 1; i <= g.v; i++) {
    for (int j = 1; j <= g.v; j++) {
      f << g.MTK[i][j] << " ";
    }
    f << endl;
  }

  f.close();
}

void hienDanhSachKe(DoThi &g) {
  ofstream f("dsk.txt");
  f << g.v << endl;
  for (int i = 1; i <= g.v; i++) {
    f << "  ";
    for (int j = 1; j <= g.v; j++) {
      if (g.MTK[i][j] == 1) f << j << " ";
    }
    f << endl;
  }
}

int main() {
  DoThi g;
  nhap(g);
  hienMaTranKe(g);
  hienDanhSachKe(g);
}