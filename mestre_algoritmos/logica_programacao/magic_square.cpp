#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

#define QTD_DIAGO 2

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, value;

  cin >> N;

  vector<int> lines_sum(N, 0), columns_sum(N, 0), diagonals_sum(QTD_DIAGO, 0);

  int aux = N - 1;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> value;

      if (i == j) {
        diagonals_sum[0] += value;
      }

      if (j == aux) {
        diagonals_sum[1] += value;
      }

      columns_sum[j] += value;
      lines_sum[i] += value;
    }

    aux--;
  }

  unordered_set<int> S;

  for (int value : columns_sum) {
    S.insert(value);
  }

  for (int value : lines_sum) {
    S.insert(value);
  }

  for (int value : diagonals_sum) {
    S.insert(value);
  }

  if (S.size() == 1) {
    auto it = S.begin();

    cout << *it << endl;
  } else {
    cout << -1 << endl;
  }

  return 0;
}