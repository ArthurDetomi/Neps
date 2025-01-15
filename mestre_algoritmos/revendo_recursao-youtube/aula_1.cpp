#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int conta_digitos(int value) {
  if (value <= 10) {
    return 1;
  }

  return 1 + conta_digitos(value / 10);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int value = 121674321;

  cout << conta_digitos(121674321) << endl;

  return 0;
}