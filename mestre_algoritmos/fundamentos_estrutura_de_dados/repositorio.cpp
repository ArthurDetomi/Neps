#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int C, N, P, V;
\
  cin >> C >> N;

  unordered_map<int, int> installed_programs;

  for (int i = 0; i < C; i++) {
    cin >> P >> V;

    installed_programs[P] = V;
  }

  map<int, int> programs_to_update;

  for (int i = 0; i < N; i++) {
    cin >> P >> V;

    if (installed_programs.find(P) != installed_programs.end()) {
      if (installed_programs[P] < V) {
        installed_programs[P] = V;
        programs_to_update[P] = V;
      }
    } else {
      installed_programs[P] = V;
      programs_to_update[P] = V;
    }
  }

  for (auto it = programs_to_update.begin(); it != programs_to_update.end();
       it++) {
    cout << it->first << " " << it->second << "\n";
  }

  return 0;
}