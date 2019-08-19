#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int minimize(int n, vector<int> S){

  int s1, s2, y=0;

  for(int i=0; i<n; i++){
	y+=S.at(i);
  }
  for(int i=0; i<n; i++){
	s1=0;
	s2=0;
	for(int j=0; j<i; j++){
	  s1+=S.at(j);
	}
	for(int j=i; j<n; j++){
	  s2+=S.at(j);
	}
	if(abs(s1-s2) < y){
	  y = abs(s1-s2);
	}
  }

  return y;
}


int main(){
  int n;
  vector<int> S(n);

  cin >> n;
  for(int i=0; i<n; i++){
	cin >> S.at(i);
  }

  cout << minimize(n, S);


  return 0;
}

