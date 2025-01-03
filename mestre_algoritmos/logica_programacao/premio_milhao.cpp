#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, A, count = 0, soma = 0;

  cin >> N;

  bool deve_contar = true;

  while (N--) {
    cin >> A;

    soma += A;

    if (deve_contar) {
      if (soma >= 1000000) {
        deve_contar = false;
      }
      count++;
    }
  }

  cout << count << endl;

  return 0;
}