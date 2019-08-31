#include"bits/stdc++.h"
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector <string> S(N);
  for (int i=0; i<N; i++) {
    cin >> S[i];
  }

  regex re(".*okyo.*ech.*", regex_constants::basic);

  for (int i=0; i<N; i++) {
    if(regex_search(S[i], re) == true)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}
