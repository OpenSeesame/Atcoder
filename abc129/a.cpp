#include<iostream>
#include<math.h>
using namespace std;


int main(){
 
  int x, p, q, r;
  cin >> p >> q >> r;

  x = min(p+q, min(q+r, r+p));
  cout << x;

  return 0;
}

