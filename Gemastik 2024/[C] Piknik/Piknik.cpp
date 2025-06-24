#include <bits/stdc++.h> 
using namespace std;     

typedef unsigned short us;
us anggota_sirkel = 0;

void dfs(us node ,vector<vector<us>>& graph, vector<bool>& visited){
    visited[node] = true;
    anggota_sirkel++;
    for (us neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, graph, visited);
        }
    }
}

void piknik(us N, us M) {
    vector<vector<us>> sirkel(N);
    vector<bool> visited(N, false);
    us X,Y;
    for(us i=0; i<M; i++) {
        cin >> X >> Y;
        X--; Y--;
        sirkel[X].push_back(Y);
        sirkel[Y].push_back(X);
    }

    us mobil= 0;
    us introvert = 0;
    for(us i=0; i<N; i++) {
        anggota_sirkel = 0; 
        if(!visited[i]) {
            dfs(i, sirkel, visited);
        }else {
            continue;
        }
        if(anggota_sirkel > 1) {
            mobil++;
        } else {
            introvert++;
        }
    }

    if(introvert > 1) {
        mobil++;
    }
    
    cout << mobil << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  us N,M;

  cin >> N >> M;

  piknik(N,M);

  return 0;
}