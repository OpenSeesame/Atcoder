#include<bits/stdc++.h>
#include<math.h>
using namespace std;

long nCr(int n, int r){
  long ans = 1;
  for(int i=n; i>n-r; --i){
    ans = ans*i;
  }
  for(int i=1; i<r+1; ++i){
    ans = ans/i;
  }
  return ans;
}

int main(){
  

  return 0;
}
