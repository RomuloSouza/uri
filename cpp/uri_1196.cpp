#include <bits/stdc++.h>

using namespace std;

char nome[10000];

int main(int argc, char const *argv[]) {

  int n;
  bool espaco = false;
  char s[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;\'ZXCVBNM,./";

  while(1){
    int i = 0;

    if(scanf(" %[^\n]",nome) == EOF)
      break;

    if(espaco)
      cout << endl;

    char c = nome[i];
    while (c == ' ')
      i++;
    while (c){

      if (c != ' '){
        bool achou = false;
        int j = 0;
        while (!achou) {
          if (c == s[j]){
            achou = true;
          }
          j++;
        }
        c = s[j-2];
      } else if (c == '1'){
        c = '\'';
      }
      cout << c;
      i++;
      c = nome[i];
    }
    espaco = true;
  }

  return 0;
}
