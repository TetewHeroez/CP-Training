#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef unsigned short us;
string biner_num = "111111111111111111111111111111";

ull binerToDecimal(const string& biner) {
    ull desimal = 0;
    ull pangkat = 1;

    for (int i = biner.size() - 1; i >= 0; --i) {
        if (biner[i] == '1') {
            desimal += pangkat;
        }
        pangkat *= 2;
    }

    return desimal;
}

void Biner(ull N){
    if(N / (biner_num.size()+1)!= 0){
        Biner(N - (biner_num.size()));
        biner_num.insert((N+1) / (biner_num.size()+1), "0");
    }else{
        biner_num.insert(N, "0");
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ull N;
    cin >> N;
    N--;
    cout << "Biner   : " << bitset<64>(N) << "\n";
    // Biner(N);

    // cout << biner_num << endl;
    // cout << binerToDecimal(biner_num) << endl;

    return 0;
}