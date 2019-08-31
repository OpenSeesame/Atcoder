#include"bits/stdc++.h"
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector <int> value(N);
  for (int i=0; i<N; i++) {
    cin >> value[i];
  }

  sort(value.begin(), value.end());
  
  float sum=value[0];

  for (int i=1; i<N; i++) {
    sum = (sum + value[i])/2.0;
  }

  cout << sum << endl;

  return 0;
}
