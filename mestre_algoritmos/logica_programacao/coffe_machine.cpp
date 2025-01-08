#include <bits/stdc++.h>
#include <climits>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

#define MAX 3

int solve(const int arr[]) {
  int shorter_time = INT_MAX;

  for (int i = 0; i < MAX; i++) {
    int sum = 0;
    for (int j = 0; j < MAX; j++) {
      if (j == i) {
        continue;
      }

      sum += arr[j] * (2 * (abs(j - i)));
    }

    shorter_time = min(shorter_time, sum);
  }

  return shorter_time;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int arr[MAX];

  for (int i = 0; i < MAX; i++) {
    cin >> arr[i];
  }

  cout << solve(arr) << endl;
}