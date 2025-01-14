#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

map<int, vector<int>> graph;

int N, M;

unordered_set<int> visited_vertexs;

void dfs(int current) {
  visited_vertexs.insert(current);

  for (int neighbour : graph[current]) {
    if (visited_vertexs.find(neighbour) == visited_vertexs.end()) {
      dfs(neighbour);
    }
  }
}

int count_components_by_graph() {
  int count = 0;

  for (int vertex = 1; vertex <= N; vertex++) {
    if (visited_vertexs.find(vertex) == visited_vertexs.end()) {
      dfs(vertex);

      count++;
    }
  }

  return count;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> M;

  for (int i = 1; i <= N; i++) {
    vector<int> V;

    graph[i] = V;
  }

  while (M--) {
    int X, Y;

    cin >> X >> Y;

    graph[X].push_back(Y);
    graph[Y].push_back(X);
  }

  cout << count_components_by_graph() << endl;

  return 0;
}