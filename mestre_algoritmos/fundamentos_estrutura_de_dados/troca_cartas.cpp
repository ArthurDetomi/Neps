#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int A, B, X;

  set<int> cartas_A, cartas_B;

  cin >> A >> B;

  for (int i = 0; i < A; i++) {
    cin >> X;

    cartas_A.insert(X);
  }

  for (int i = 0; i < B; i++) {
    cin >> X;

    cartas_B.insert(X);
  }

  int ans1 = 0, ans2 = 0;

  for (auto it = cartas_A.begin(); it != cartas_A.end(); it++) {
    int value = *it;

    if (cartas_B.find(value) == cartas_B.end()) {
      ans1++;
    }
  }

  for (auto it = cartas_B.begin(); it != cartas_B.end(); it++) {
    int value = *it;

    if (cartas_A.find(value) == cartas_A.end()) {
      ans2++;
    }
  }

  cout << min(ans1, ans2) << endl;

  return 0;
}