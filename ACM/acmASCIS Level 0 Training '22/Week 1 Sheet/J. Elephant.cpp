// link :- https://codeforces.com/group/Lq34voxr4E/contest/350978/problem/J
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll x;
    cin>>x;
    if (x<5) cout << 1;
    else if (x%5==0) cout << x/5;
    else cout << (x/5)+1;


    return 0;
}