#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,a1,a2,b,c,d;
  int cntc=0;
  int cntd=0;
  int cntcd=0;

  cin >> a >> b >> c >> d;
  a1 = a;
  a2 = a;

  for(a1; a1<=b; a1++){
	if(a1%c == 0) break;
  }

  for(a1; a1<=b; a1+=c){
	if(a1<=b)cntc++;
	if(a1%d == 0)cntcd++;
  }

  for(a2; a2<=b; a2++){
	if(a2%d == 0) break;
  }

  for(a2; a2<=b; a2+=d){
	if(a2<=b)cntd++;
  }

  cout << b-a+1-cntc-cntd+cntcd << endl;

  return 0;
}
