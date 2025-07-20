#include <iostream>
#include <cmath>

int comb(int n, int k) {
    if (k == 0 || k == n)
        return 1;

    int result = 1; 
    for (int i = 0; i < k; i++) {
        result *= (n - i);  
        result /= (i + 1);  
    }
    return result;
}
int LHS(int n, int k){
  int sum = 0;
  for (int j = 0; j <= k; j++)
    sum += comb(n, j);
  return sum;
}

int RHS(int n, int k){
  int sum = 0;
  for (int j = 0; j <= k; j++)
    sum += comb(n-1-j,k-j)*(int)pow(2,j);
  return sum;
}

int main()
{
  std::cout << LHS(10,9) << std::endl;
  std::cout << RHS(10,9) << std::endl;
}