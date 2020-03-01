#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  int max_aux, max;
  int custo;
  int aux;

  while (scanf(" %d\n",&n) != EOF) {
    cin >> custo;
    max = 0;
    max_aux = 0;
    for (size_t i = 0; i < n; i++) {
      cin >> aux;

      if ((aux - custo) > 0) {
        max_aux += (aux-custo);
      } else {
        max_aux += (aux-custo);
        if (max_aux < 0) {
          max_aux =  0;
        }
      }
      if (max_aux > max) {
        max = max_aux;
      }

    }
    cout << max << endl;
  }
  return 0;
}
