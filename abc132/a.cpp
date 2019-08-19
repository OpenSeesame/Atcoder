#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){

  string S;
  cin >> S;

  if((S[0]==S[1]&&S[1]!=S[2]&&S[2]==S[3])||(S[0]==S[2]&&S[2]!=S[1]&&S[1]==S[3])||(S[0]==S[3]&&S[3]!=S[1]&&S[1]==S[2])){
    cout << "Yes" << endl;
  }
  else
    cout << "No" << endl;

  return 0;
}

    
