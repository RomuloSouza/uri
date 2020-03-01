#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {

  int n;
  char c = ' ';

  while(scanf("%d",&n) != EOF){

    int aux = (n+1)/2;
    int num = 1;

    for (size_t i = 1; i <= aux; i++) {
      for (int j = 1; j <= aux-i;j++){
        cout << c;
      }
      for (int j = 1; j <= num;j++){
         cout << '*';
      }
      cout << endl;
      num += 2;
    }
    for (int i = 1; i <= aux-1; i++){
        cout << c;
    }
    cout << '*' << endl;
    for (int i = 1; i <= aux-2; i++){
        cout << c;
    }
    cout << "***" << endl << endl;
  }


  return 0;
}
