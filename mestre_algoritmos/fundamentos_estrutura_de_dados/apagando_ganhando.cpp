#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int char_to_int(char c) { return c - '0'; }

string solve(const string inp, int n, int d) {
  string stack;

  int erased = 0;

  for (int i = 0; i < (int)inp.size(); i++) {
    char current_char = inp[i];

    if (stack.empty()) {
      stack.push_back(current_char);
      continue;
    }

    int current_number = char_to_int(current_char);

    int number_of_stack = char_to_int(stack.back());

    while (!stack.empty() && current_number > number_of_stack && erased < d) {
      stack.pop_back();

      erased++;
      number_of_stack = char_to_int(stack.back());
    }

    stack.push_back(current_char);
  }

  while (stack.size() != (n - d)) {
    stack.pop_back();
  }

  return stack;
}

int main() {

  int n, d;
  string inp;

  while (true) {
    cin >> n >> d;

    if (n == 0 && d == 0)
      break;

    cin >> inp;

    cout << solve(inp, n, d) << endl;
  }

  return 0;
}