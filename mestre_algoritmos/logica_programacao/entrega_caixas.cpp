#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int arr[3];

  for (int i = 0; i < 3; i++) {
    cin >> arr[i];
  }

  sort(arr, arr + 3);

  int X = arr[0], Y = arr[1], Z = arr[2], ans;

  if ((X + Y) < Z) {
    ans = 1;
  } else if (X < Y && Y < Z) {
    ans = 1;
  } else if (X < Y || Y < Z) {
    ans = 2;
  } else {
    ans = 3;
  }

  cout << ans << endl;

  return 0;
}