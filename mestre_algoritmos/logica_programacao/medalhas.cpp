#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int T;

  set<pii> placement_order;

  for (int i = 1; i <= 3; i++) {
    cin >> T;

    placement_order.insert({T, i});
  }

  for (auto it = placement_order.begin(); it != placement_order.end(); it++) {
    cout << it->second << endl;
  }

  return 0;
}