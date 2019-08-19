#include<bits/stdc++.h>
using namespace std;
int main(){

  char x;
  char y=10;
  for(int i=0; i<4; i++){
	cin >> x;
	if(x==y){
	  cout << "Bad" << endl;
	  break;
	}
	if(i == 3)cout << "Good" << endl;
	y = x;
  }
  

  return 0;
}

