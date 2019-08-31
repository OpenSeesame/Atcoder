#include"bits/stdc++.h"
using namespace std;

bool IsPrime(int x)
{
  if (x < 2) return false;
  else if (x == 2) return true;
  else if (x % 2 == 0) return false;

  double sqrtx = sqrt(x);

  for(int i=3; i<=sqrtx; i+=2){
    if(x%i == 0) return false;
  }
  return true;
  
}

int main()
{
  int N;
  cin >> N;
  int cnt2=0;
  int cnt7=0;

  vector <int> X(N);

  for (int i=0; i<N; i++) {
    cin >> X[i];
    if (IsPrime(X[i]-2) == true) cnt2++; 
    if (X[i] == 7) {
      cnt2--;
      cnt7++;
    }
  }

  if (cnt7 % 2 == 0){

    if (cnt2 % 2 == 0) {
      if (N % 2 == 0) cout << "Ai" << endl;
      else cout << "An" << endl;
    }

    else cout << "An" << endl;
    
  }

  else {

    if (cnt2 % 2 == 0) {
      cout << "An" << endl;
    }

    else {
      if (N % 2 == 0) cout << "An" << endl;
      else cout << "Ai" << endl;
    }

  }
      

  return 0;
}
