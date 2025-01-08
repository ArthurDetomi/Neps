#include <bits/stdc++.h>
#include <vector>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

#define TEN 10

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int arr[TEN];

  int lowest_value = INT_MAX;

  for (int i = 0; i < TEN; i++) {
    cin >> arr[i];

    lowest_value = min(lowest_value, arr[i]);
  }

  cout << "Menor: " << lowest_value << endl;

  int count_ocorrencias = 0;
  for (int i = 0; i < TEN; i++) {
    if (arr[i] == lowest_value) {
      arr[i] = -1;

      count_ocorrencias++;
    }
  }

  cout << "Ocorrencias: ";
  int count = 0, index = 0;

  while (count < count_ocorrencias) {
    if (arr[index] == -1) {
      cout << index;

      count++;

      if (count < count_ocorrencias) {
        cout << " ";
      }
    }

    index++;
  }
  cout << endl;

  for (int i = 0; i < TEN; i++) {
    cout << arr[i];

    if (i != TEN - 1) {
      cout << " ";
    }
  }
  cout << endl;

  return 0;
}