#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

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

  return 0;
}