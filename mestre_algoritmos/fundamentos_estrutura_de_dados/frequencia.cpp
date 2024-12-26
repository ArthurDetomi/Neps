#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, V;

  set<int> freq;

  cin >> N;

  while (N--) {
    cin >> V;

    freq.insert(V);
  }

  cout << freq.size() << endl;
}