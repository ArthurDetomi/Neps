#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define endl '\n'

struct Pos {
  int l;
  int c;
};

// retorna um vetor com todos os vizinhos da posição p
vector<Pos> get_vizinhos(Pos p) {
  return {{p.l, p.c - 1}, {p.l - 1, p.c}, {p.l, p.c + 1}, {p.l + 1, p.c}};
}

void show(vector<string> mat) {
  for (string line : mat)
    cout << line << endl;
  cout << endl;
  getchar();
}

int calculate_force_brute(vector<string> mat) {
  int count = 0;

  for (string line : mat) {
    for (char c : line) {
      if (c == '.') {
        count++;
      }
    }
  }

  return count;
}

bool buscar(vector<string> &mat, Pos atual, Pos dest, int &cont) {
  if (atual.l == dest.l && atual.c == dest.c) {
    return true;
  }
  if (mat[atual.l][atual.c] != '_') {
    return false;
  }

  cont++;

  mat[atual.l][atual.c] = '.';
  // show(mat);
  for (Pos vizin : get_vizinhos(atual)) {
    bool eh_caminho = buscar(mat, vizin, dest, cont);

    if (eh_caminho) {
      return true;
    }
  }

  mat[atual.l][atual.c] = '_';

  cont--;

  // show(mat);

  return false;
}

int main() {
  ifstream arq("in");

  int nl = 0, nc = 0;
  arq >> nl >> nc;
  vector<string> mat(nl, ""); // começa com nl strings ""
  string tmp;
  getline(arq, tmp);
  Pos inicio, fim;

  // carregando matriz
  for (int i = 0; i < nl; i++)
    getline(arq, mat[i]);

  // procurando inicio e fim e colocando ' ' nas posições iniciais
  for (int l = 0; l < nl; l++) {
    for (int c = 0; c < nc; c++) {
      if (mat[l][c] == 'I') {
        mat[l][c] = '_';
        inicio = Pos{l, c};
      }
      if (mat[l][c] == 'F') {
        mat[l][c] = '_';
        fim = Pos{l, c};
      }
    }
  }

  int cont = 0;
  buscar(mat, inicio, fim, cont);

  cout << "Quantidade de pontos colocados: " << cont << endl;

  cout << "Quantidade de pontos colocados: " << calculate_force_brute(mat)
       << endl;

  show(mat);

  cout << "       nl=" << nl << " nc=" << nc << "\n";
  cout << "inicio: l=" << inicio.l << " , c=" << inicio.c << endl;
  cout << "   fim: l=" << fim.l << " , c=" << fim.c << endl;
}