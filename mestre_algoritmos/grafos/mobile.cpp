#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj;
vector<int> size;

int solve(int v) {
  int count_v = 0, count_a = 0, tmp;

  for (int a : adj[v]) {
    tmp = solve(a);

    printf("v=%d a=%d, count_v = %d, count_a = %d, tmp = %d\n", v, a, count_v,
           count_a, tmp);

    if (tmp == -1)
      return -1;
    if (!count_a)
      count_a = tmp;
    else if (count_a != tmp)
      return -1;

    count_v += count_a;
  }
  return count_v + 1;
}

int main() {
  int N;
  cin >> N;
  adj = vector<vector<int>>(N + 1, vector<int>());
  for (int i = 0; i < N; i++) {
    int u, v;
    cin >> u >> v;
    adj[v].push_back(u);
  }
  int ans = solve(0) != -1;
  cout << (ans ? "bem" : "mal") << endl;
  return 0;
}