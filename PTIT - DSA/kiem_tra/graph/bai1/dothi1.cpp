#include <bits/stdc++.h>

#include <fstream>
#define MAX 100
using namespace std;

struct DoThi {
  int v, e;
  int MTK[MAX][MAX];
};

void docFile(DoThi &g) {
  ifstream f("mtk.txt", ios::in);
  f >> g.v;
  for (int i = 1; i <= g.v; i++) {
    for (int j = 1; j <= g.v; j++) {
      f >> g.MTK[i][j];
    }
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
  ofstream f("dsc.txt");
  f << g.v << " " << tinhCanh(g) << endl;

  for (int i = 1; i <= g.v; i++) {
    for (int j = i + 1; j <= g.v; j++) {
      if (g.MTK[i][j] == 1) f << i << " " << j << endl;
    }
  }
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
  int ok = 1;
  int select;
  DoThi g;

  docFile(g);
  hienDanhSachCanh(g);
  hienDanhSachKe(g);
  return 0;
}