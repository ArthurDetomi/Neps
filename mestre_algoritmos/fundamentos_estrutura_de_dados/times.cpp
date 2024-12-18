#include <bits/stdc++.h>

using namespace std;

#define pis pair<int, string>

#define endl '\n'

int main() {
  int N, T;

  cin >> N >> T;

  vector<set<string>> teams(T + 1);
  priority_queue<pis, vector<pis>> pq;

  for (int i = 0; i < N; i++) {
    string name;
    int H;

    cin >> name >> H;

    pq.push({H, name});
  }

  int aux = 0;
  for (int i = 0; i < N; i++) {
    pis current_player = pq.top();
    pq.pop();

    teams[i % T].insert({current_player.second});
  }

  for (int i = 0; i < T; i++) {
    cout << "Time " << i + 1 << endl;
    for (string name : teams[i]) {
      cout << name << endl;
    }

    if (i != T - 1)
      cout << endl;
  }

  return 0;
}