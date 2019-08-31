#include"bits/stdc++.h"
using namespace std;

float inverse(float a)
{
  float b;
  b = 1/a;

  return b;
}

int main()
{
  int N;
  cin >> N;
  vector <int> A(N);
  for (int i=0; i<N; i++) {
    cin >> A[i];
    A[i] = float(A[i]);
  }

  float sum=0;

  for (int i=0; i<N; i++) {
    sum += inverse(A[i]);
  }

  cout << inverse(sum) << endl;

  return 0;
}
