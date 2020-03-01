#include <bits/stdc++.h>

using namespace std;

typedef struct scamisa
{
    string nome;
    string c;
    string cor;
    /* data */
} scamisa;

bool my_sort(scamisa a, scamisa b){

    if(a.cor == b.cor){
        if (a.c == b.c){
            return (a.nome < b.nome);
        } else {
            return (a.c >    b.c);
        }
    } else {
        return (a.cor < b.cor);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    while (n != 0){
        vector<scamisa> v;
        scamisa camisa;
        string cor, c;
        char nome[250];
        // char c[1];

        for (int i = 0; i < n; i++){
            scanf(" %[^\n]", nome);
            cin >> cor;
            cin >> c;

            camisa.nome = nome;
            camisa.cor = cor;
            camisa.c = c;
            v.push_back(camisa);
        }

        sort(v.begin(), v.end(), my_sort);

        for (int i = 0; i < v.size(); i++){
            cout << v[i].cor << " " << v[i].c << " " << v[i].nome << endl;
        }

        cin >> n;
        if (n != 0){
            cout << endl;
        }
    }    
    return 0;
}
