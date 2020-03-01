#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {

  int n,q;
  cin >> n;
  cin >> q;
  int contador = 0;

  while (n != 0 && q != 0){
    int vetor1[n],vetor2[q];
    bool achou[q]={false};
    int posicao = 0;

    for (size_t i = 0; i < n ; i++) {
      cin >> vetor1[i];
    }
    for (size_t i = 0; i < q; i++) {
      cin >> vetor2[i];
    }

    cout << "CASE# " << contador+1 <<":" << endl;
    for (size_t i = 0; i < q; i++) {
      for (int j = 0; j < n; j++) {
        if (vetor1[j] == vetor2[i] && achou[i] == false){
          achou[i] = true;
          posicao = j+1;
        }

      }
      if (achou[i] == true){
        cout << vetor2[i] << " found at " << posicao+1 << endl;
      } else{
        cout << vetor2[i] << " not found" << endl;
      }
    }
    contador++;
    cin >> n;
    cin >> q;
  }
  return 0;
}
