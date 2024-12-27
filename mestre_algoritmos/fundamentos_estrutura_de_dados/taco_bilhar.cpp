#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int C, X, ans = 0;

  cin >> C;

  set<int> stock;

  while (C--) {

    cin >> X;

    if (stock.find(X) != stock.end()) {
      stock.erase(X);
    } else {
      stock.insert(X);
      ans += 2;
    }
  }

  cout << ans << endl;
}