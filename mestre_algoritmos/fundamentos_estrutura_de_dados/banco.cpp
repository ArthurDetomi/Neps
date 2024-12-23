#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  // leio o número de caixas e o número de clientes na fila, respectivamente
  int c, n;
  cin >> c >> n;

  // se eu tenho mais caixas que clientes a serem atendidos, ninguém esperará
  // mais de 20 minutos
  if (c >= n) {
    cout << 0 << "\n";
    return 0;
  }

  // crio uma fila de prioridade em que o topo sempre será o menor tempo em que
  // um atendimento é finalizado
  priority_queue<int, vector<int>, greater<int>> caixa;

  int tempo = 0, ans = 0, t, d;

  // os primeiros c clientes não precisam esperar na fila, é só ir no primeiro
  // caixa vazio
  for (int i = 0; i < c; i++) {
    // leio o tempo de entrada e o de atendimento
    cin >> t >> d;
    // o final do atendimento do cliente i será no tempo t + d
    caixa.push(t + d);
  }

  // para cada um dos próximos n - c clientes
  for (int i = c; i < n; i++) {
    // leio o tempo de entrada e o tempo de atendimento
    cin >> t >> d;
    // pego o menor tempo em que um caixa estará livre e retiro ele da prioriquy
    // queue
    tempo = caixa.top();
    caixa.pop();

    // se a diferença do tempo entre o primeiro caixa ficar livre e o tempo de
    // entrada do cliente na fila for maior que 20 minutos, adiciono 1 na
    // resposta
    if (tempo - t > 20) {
      ans++;
    }
    // o inicio do atendimento do cliente i será no maximo entre o tempo que ele
    // entrou na fila e o tempo que o primeiro caixa ficou vazio e demorará d
    // minutos
    caixa.push(max(tempo, t) + d);
  }

  // retorno a resposta
  cout << ans << "\n";

  return 0;
}
