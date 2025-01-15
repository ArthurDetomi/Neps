#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

list<int> impares(int vet[], int size) {
  if (size == 0) {
    return list<int>();
  }
  if (vet[0] % 2 == 0) {
    return impares(vet + 1, size - 1);
  }
  list<int> lista = impares(vet + 1, size - 1);

  lista.push_front(vet[0]);

  return lista;
}

list<int> impares2(int vet[], int size, list<int> &acc) {
  if (size == 0) {
    return acc;
  }
  if (vet[0] % 2 == 0) {
    return impares2(vet + 1, size - 1, acc);
  }
  acc.push_back(vet[0]);
  return impares2(vet + 1, size - 1, acc);
}

int index_of(int vet[], int size, int value) {
  if (size == 0) {
    return -1;
  }

  if (vet[0] == value) {
    return 0;
  }

  int dist = index_of(vet + 1, size - 1, value);

  return dist == -1 ? -1 : dist + 1;
}

int index_of_2(int vet[], int size, int value, int index = 0) {
  if (size == 0) {
    return -1;
  }
  if (vet[0] == value) {
    return index;
  }

  return index_of_2(vet + 1, size - 1, value, index + 1);
}

int vet_sum(int v[], int size) {
  if (size == 0) {
    return 0;
  }

  return v[0] + vet_sum(v + 1, size - 1);
}

int vet_sum_calda(int v[], int size, int sum = 0) {
  if (size == 0) {
    return sum;
  }

  return vet_sum_calda(v + 1, size - 1, sum + v[0]);
}

int vet_min(int vet[], int size) {
  if (size == 1) {
    return vet[0];
  }

  return min(vet[0], vet_min(vet + 1, size - 1));
}

int vet_min_calda(int vet[], int size, int menor = INT_MAX) {
  if (size == 0) {
    return menor;
  }

  return vet_min_calda(vet + 1, size - 1, min(vet[0], menor));
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int vet[] = {
      1, 2, 3, 4, 5, 6, 7, 8,
  };

  int size = sizeof(vet) / sizeof(int);

  cout << vet_sum(vet, size) << endl;

  cout << vet_sum_calda(vet, size) << endl;

  cout << vet_min(vet, size) << endl;

  cout << vet_min_calda(vet, size) << endl;

  cout << index_of(vet, size, 5) << endl;

  cout << index_of_2(vet, size, 5) << endl;

  list<int> imps = impares(vet, size);

  for (auto v : imps) {
    cout << v << " ";
  }
  cout << endl;

  list<int> acc;
  for (auto v : impares2(vet, size, acc)) {
    cout << v << " ";
  }
  cout << endl;

  return 0;
}