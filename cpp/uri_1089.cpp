#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int num;
  int i;
  cin >> num;

  while (num != 0){
    int vetor[num];
    int contador = 0;

    for (i = 0; i < num; i++) {
      cin >> vetor[i];
    }

    i = 1;

    if (vetor[i] > vetor[i-1]) {
      while (vetor[i] > vetor[i-1] && i < num) {
        i++;
        if (vetor[i] < vetor[i-1]) {
          contador++;
        }
      }
    } else if (vetor[i] < vetor[i-1]){
      while (vetor[i] < vetor[i-1] && i < num) {
        i++;
        if (vetor[i] > vetor[i-1]) {
          contador++;
        }
      }
    }
    if(num >= 2){
      if (vetor[num] > vetor[0] && vetor[0] < vetor[1]) {
        contador++;
      } else if (vetor[num] < vetor[0] && vetor[0] > vetor[1]){
        contador++;
      }
    }
    cout << contador << endl;
    cin >> num;
  }
  return 0;
}
