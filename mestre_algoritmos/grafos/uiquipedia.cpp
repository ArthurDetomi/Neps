#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

unordered_map<string, unordered_set<string>> graph;

unordered_map<string, int> coust_by_path;

void bfs(string source) {
  queue<string> Q;

  unordered_set<string> visited;

  Q.push(source);

  visited.insert(source);

  while (!Q.empty()) {
    string current = Q.front();
    Q.pop();

    for (string neighbour : graph[current]) {
      if (visited.find(neighbour) != visited.end()) {
        continue;
      }

      coust_by_path[neighbour] = coust_by_path[current] + 1;

      visited.insert(neighbour);
      Q.push(neighbour);
    }
  }
}

int get_shortest_path(string source, string destination) {
  bfs(source);
  return coust_by_path[destination];
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N;

  cin >> N;

  set<string> ordened_strings;

  for (int i = 0; i < N; i++) {
    string x, y;

    cin >> x >> y;

    graph[x].insert(y);

    ordened_strings.insert(x);
    ordened_strings.insert(y);
  }

  string source, destination;

  cin >> source >> destination;

  for (auto it = ordened_strings.begin(); it != prev(ordened_strings.end());
       it++) {
    string current = *it;
    string prox = *next(it);

    coust_by_path[current] = 0;
    coust_by_path[prox] = 0;

    graph[current].insert(prox);
    graph[prox].insert(current);
  }

  printf("%d\n", get_shortest_path(source, destination));

  return 0;
}