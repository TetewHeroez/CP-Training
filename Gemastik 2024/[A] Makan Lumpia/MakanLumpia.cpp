#include <iostream>
using namespace std;

long long makanLumpia(long long A, long long B, long long C, long long D) {
    if(D == 0 && B == 0 && C == 0 && A == 0) {
      return 0;
    }
    if(A != 0){
      if(B == 0 && C == 0){
        return (A+D+2)/3;
      }else if (B == 0) {
        return (A+C+2)/3 + makanLumpia(0,0,0,D);
      }
      return (A+2)/3 + makanLumpia(0, B, C, D);
    }
    if(B != 0 || C != 0) {
      if(C == 0) {
        return (B+D+2)/3;
      } 
      return (B+C+2)/3 + makanLumpia(0,0,0,D);
    }
    return (D+2)/3;
}

int main() {
    // cout << "Makan Lumpia" << endl;
    // cout << makanLumpia(3, 3, 3, 3) << endl;
    // cout << makanLumpia(2, 1, 2, 1) << endl;
    // cout << makanLumpia(9, 0, 0, 0) << endl;
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << makanLumpia(A, B, C, D) << endl;
    return 0;
}