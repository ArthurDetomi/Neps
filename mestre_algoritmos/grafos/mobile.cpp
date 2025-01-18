#include <bits/stdc++.h>

using namespace std;

#define MAXN 100001
#define UNBALANCED -1

vector<int> adj[MAXN];

int N;

int subtree_size(int current_vertex) {
  int count = 1, expected = -1;

  for (int neighbor : adj[current_vertex]) {
    int weight_neighbor = subtree_size(neighbor);

    printf("curr = %d count = %d weigh = %d expe = %d\n", current_vertex, count,
           weight_neighbor, expected);

    if (weight_neighbor == UNBALANCED) {
      return UNBALANCED;
    }

    if (expected == -1) {
      expected = weight_neighbor;
    } else if (expected != weight_neighbor) {
      return UNBALANCED;
    }

    count += weight_neighbor;
  }

  return count;
}

bool is_balanced() { return subtree_size(0) != UNBALANCED; }

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;

  int a, b;

  for (int i = 0; i < N; i++) {
    cin >> a >> b;

    adj[b].push_back(a);
  }

  printf("%s\n", (is_balanced()) ? "bem" : "mal");

  return 0;
}