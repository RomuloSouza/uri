#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int x;
    vector<int> imp, par;
    vector<int>::iterator it;

    cin >> n;

    while (n--)
    {
        cin >> x;
        if (x % 2 == 0){
            par.push_back(x);
        } else{
            imp.push_back(x);
        }
    }

    sort(par.begin(), par.end());
    sort(imp.begin(), imp.end());

    for (int i = 0; i < par.size(); i++){
        cout << par[i] << endl;
    }

    for (int i = imp.size()-1; i >= 0; i--) {
        cout << imp[i] << endl;
    }

    return 0;
}
