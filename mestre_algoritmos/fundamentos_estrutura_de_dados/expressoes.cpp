#include <bits/stdc++.h>
#include <unordered_map>

#define endl '\n'

using namespace std;

unordered_map<char, char> caracteres_map;

bool is_the_expression_well_defined(string expression) {
  stack<char> S;

  for (int i = 0; i < (int)expression.size(); i++) {
    char current_char = expression[i];

    if (caracteres_map.find(current_char) != caracteres_map.end()) {
      S.push(current_char);
    } else {
      if (S.empty()) {
        return false;
      }

      char last_inserted = S.top();

      char fechador_esperado = caracteres_map[last_inserted];

      if (fechador_esperado != current_char) {
        return false;
      }

      S.pop();
    }
  }

  if (!S.empty()) {
    return false;
  }

  return true;
}

void initialize_map() {
  caracteres_map['{'] = '}';
  caracteres_map['['] = ']';
  caracteres_map['('] = ')';
}

int main() {
  initialize_map();

  int T;

  cin >> T;

  while (T--) {
    string expression;

    cin >> expression;

    char response = (is_the_expression_well_defined(expression)) ? 'S' : 'N';

    cout << response << endl;
  }

  return 0;
}