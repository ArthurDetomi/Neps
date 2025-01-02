#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int IA, IB, FA, FB, ans;

  cin >> IA >> IB >> FA >> FB;

  if (IA == FA && IB == FB) {
    ans = 0;
  } else if (IA != FA && IB != FB) {
    ans = 1;
  } else if (IA == FA && IB != FB) {
    ans = 2;
  } else if (IA != FA && IB == FB) {
    ans = 1;
  }

  cout << ans << endl;

  return 0;
}