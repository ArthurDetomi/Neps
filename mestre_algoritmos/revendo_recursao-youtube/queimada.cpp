#include <array>
#include <bits/stdc++.h>
#include <cstdio>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

#define MAX 30

int nl, nc, l, c;

array<string, MAX> mat;

array<pii, 4> posicoes = {{{0, 1}, {0, -1}, {1, 0}, {-1, 0}}};

pii sum_pair(pii a, pii b) { return {a.first + b.first, a.second + b.second}; }

void show_matrix() {
  for (int i = 0; i < nl; i++) {
    cout << mat[i] << endl;
  }
  cout << "\n\n";
}

bool out_limit_matrix(int l, int c) {
  return l < 0 || l >= nl || c >= nc || c < 0;
}

int simulate_burn(int l, int c) {
  if (out_limit_matrix(l, c) || mat[l][c] != '#') {
    return 0;
  }

  mat[l][c] = 'o';

  int cont = 1;

  for (int i = 0; i < 4; i++) {
    pii current_pos = {l, c};

    pii prox_pos = sum_pair(current_pos, posicoes[i]);

    cont += simulate_burn(prox_pos.first, prox_pos.second);
  }

  return cont;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> nl >> nc >> l >> c;

  for (int i = 0; i < nl; i++) {
    cin >> mat[i];
  }

  int count = simulate_burn(l, c);

  show_matrix();

  cout << "Quantity of tree burned " << count << endl;

  return 0;
}