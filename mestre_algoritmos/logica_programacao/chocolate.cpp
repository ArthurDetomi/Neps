#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int N, X1, Y1, X2, Y2;

int quadrante(int x, int y) {
  int middle = N / 2;

  if (x > middle && y > middle) {
    return 1;
  } else if (x <= middle && y > middle) {
    return 2;
  } else if (x <= middle && y <= middle) {
    return 3;
  }
  return 4;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;

  cin >> X1 >> Y1 >> X2 >> Y2;

  string response = (quadrante(X1, Y1) == quadrante(X2, Y2)) ? "N\n" : "S\n";

  cout << response;

  return 0;
}