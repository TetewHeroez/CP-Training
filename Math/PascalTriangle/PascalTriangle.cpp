#include <iostream>
#include <vector>
using namespace std;

typedef unsigned long long ull;

// Pascal Triangle sampai n = 50, k = 30
vector<vector<ull>> pascalTriangle(int N, int K) {
    vector<vector<ull>> C(N + 1, vector<ull>(K + 1, 0));

    for (int n = 0; n <= N; ++n) {
        C[n][0] = 1; // nC0 = 1
        for (int k = 1; k <= min(n, K); ++k) {
            C[n][k] = C[n - 1][k - 1] + C[n - 1][k];
        }
    }

    return C;
}

int main() {
    int N = 50;
    int K = 30;

    vector<vector<ull>> C = pascalTriangle(N, K);

    // Contoh: cetak kombinasi 50C30
    cout << "50C30 = " << C[50][30] << endl;
}
