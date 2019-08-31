#include"bits/stdc++.h"
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector <vector<int>> table(N, vector<int> (N));
  int cnt=1;

  if (N % 2 == 0) {
    cout << "No" << endl;
    return 0;
  }
  
  else{
    cout << "Yes" << endl;

    for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
       table[i][j] = cnt;
       cnt++;
      }
    }
    for(int i=0; i<N/2; i++){
      swap(table[i][i], table[N-1-i][N-1-i]);
    }

    for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
       cout << table[i][j] << ' ';
      }
      cout << endl;
    }
  }
  return 0;
}
