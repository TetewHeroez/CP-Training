#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
string biner_num = "111111111111111111111111111111";

ll binerToDecimal(const string& biner) {
    ll desimal = 0;
    ll pangkat = 1;

    for (int i = biner.size() - 1; i >= 0; --i) {
        if (biner[i] == '1') {
            desimal += pangkat;
        }
        pangkat *= 2;
    }

    return desimal;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll N;
    cin >> N;

    cout << N << endl;

    return 0;
}