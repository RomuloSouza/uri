#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    char linha[2500];

    cin >> n;

    while (n--){
        vector <pair<string, int>> v;
        pair<string, int> maior;
        string s;
        scanf(" %[^\n]", linha);
        int aux = 0;
        int str_count = 0;
        while (linha[aux] != '\0' && linha[aux] != EOF){
            if(linha[aux] != ' '){
                s.push_back(linha[aux]);
            } else {
                int size = s.size();
                v.push_back(make_pair(s, size));
                s.clear();
            }
            aux++;
        }
        v.push_back(make_pair(s, s.size()));
        s.clear();

        string output[50];

        int tamanho = 0;

        while(1){
            maior = v[0];
            int pos = 0;
            for (int i = 0; i < v.size(); i++){
                if(v[i].second > maior.second){
                    pos = i;
                    maior = v[i];
                }
            }
            output[tamanho] = maior.first;
            tamanho++;
            v.erase(v.begin()+pos);
            if (v.empty()){
                break;
            }
        }

        cout << output[0];
        for (int i = 1; i < tamanho; i++){
            cout << " " << output[i];
        }
        cout << endl;
    }
    return 0;
}
