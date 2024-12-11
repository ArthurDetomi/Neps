#include <bits/stdc++.h>
#include <queue>
#include <utility>

#define endl '\n'

using namespace std;

int N = 15;

int main() {
  queue<char> winners;

  int result_t1, result_t2;
  char name_t1 = 'A', name_t2 = 'B';

  for (int i = 0; i < 8; i++) {
    cin >> result_t1 >> result_t2;

    if (result_t1 > result_t2) {
      winners.push(name_t1);
    } else {
      winners.push(name_t2);
    }

    name_t1 += 2;
    name_t2 += 2;
  }

  int qtd_results = 4;

  for (int i = 0; i < 3; i++) {
    for (int i = 0; i < qtd_results; i++) {
      cin >> result_t1 >> result_t2;

      name_t1 = winners.front();
      winners.pop();

      name_t2 = winners.front();
      winners.pop();

      if (result_t1 > result_t2) {
        winners.push(name_t1);
      } else {
        winners.push(name_t2);
      }
    }

    qtd_results /= 2;
  }

  // Printing the winner
  cout << winners.front() << endl;

  return 0;
}