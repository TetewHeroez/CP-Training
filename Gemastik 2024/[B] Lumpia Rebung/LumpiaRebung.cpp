#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

void lumpiaRebung(int N, ll L, vector<int>& B) {
    vector<ll> LR(1);
    LR[0] = L;
    for(int cut : B) {
      LR[cut-1] /= 2;
      LR.insert(LR.begin() + cut, LR[cut-1]);
    }
    for(ll length : LR) {
        cout << length << " ";
    }
}

int main() {
    // vector<int> coba = {1, 2, 2, 1};
    // lumpiaRebung(4, 1000, coba);
    // return 0;
    int N;
    ll L;
    cin >> N >> L;
    vector<int> B(N);
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    lumpiaRebung(N, L, B);
}

