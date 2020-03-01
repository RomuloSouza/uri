#include <bits/stdc++.h>

using namespace std;

bool match(char a, char b){
    if (b < a)
        swap(a, b);
    return (a == 'B' && b == 'S' || a == 'C' && b == 'F');
}

int main(int argc, char const *argv[])
{
    // string s;
    string s;

    // char s[1000];
    while (cin >> s) {
    // while (scanf(" %[^\n]", s) != EOF){
        stack<char> pilha;
        int count = 0;

        for (int i = 0; i < s.size(); i++){
            if (!pilha.empty() && match(pilha.top(), s[i])){
                count++;
                pilha.pop();
            } else {
                pilha.push(s[i]);
            }
        }

        cout << count << endl;
    }
    return 0;
}
