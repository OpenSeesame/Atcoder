#include"bits/stdc++.h"
using namespace std;

int main()
{
  int N, X;
  cin >> N >> X;
  vector <int> a(N);
  for (int i=0; i<N; i++) {
    cin >> a[i];
  }
  
  int P=0;
  int num_broken=0;
  for(int i=0; i<N; i++){
    if(a[i]!=-1) {
      P = P ^ a[i];
    }
    else num_broken++;//-1の数
  }

  int A;
  A = X ^ P;
  //num_broken個のX以下の数のXORをとってAになるような組は存在するか



  if (num_broken == 0)
  return 0;
}
