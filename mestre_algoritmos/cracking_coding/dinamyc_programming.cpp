#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int fibonnacci(int i, int memo[]) {
  cout << i << " " << memo[i] << "<<<" << endl;
  if (i == 0 || i == 1)
    return i;

  if (memo[0] == 0) {
    memo[i] = fibonnacci(i - 1, memo) + fibonnacci(i - 2, memo);
  }

  cout << i << " " << memo[i] << endl;

  return memo[i];
}

int fibbonacci_bottom_up(int n) {
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;

  int memo[n];

  memo[0] = 0;
  memo[1] = 1;

  for (int i = 2; i < n; i++) {
    memo[i] = memo[i - 1] + memo[i - 2];
  }

  return memo[n - 1] + memo[n - 2];
}

int fib2(int n) {
  if (n == 0)
    return 0;

  int a = 0, b = 1;

  for (int i = 2; i < n; i++) {
    int c = a + b;

    a = b;
    b = c;
  }

  return a + b;
}

int fibonnacci(int n) {
  int vet[n + 1];

  fill(vet, vet + n + 1, 0);

  return fibonnacci(n, vet);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cout << fibonnacci(4) << endl;
  cout << fibbonacci_bottom_up(4) << endl;
  cout << fib2(4) << endl;

  return 0;
}