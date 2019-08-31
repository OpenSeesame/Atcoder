#include"bits/stdc++.h"
using namespace std;

int main()
{
    int A, B, T;
    cin >> A >> B >> T;

    int interval = B-A;
    int remainderb = B % interval;
    int remaindert = T % interval;
    if (remaindert > remainderb) cout << T - remaindert + remainderb + interval;
    else cout << T - remaindert + remainderb; 

    return 0;
}
