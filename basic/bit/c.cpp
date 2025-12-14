/**
problem:https://vjudge.net/problem/HackerRank-30-bitwise-and
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/10/31, Time: 17:24:08
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve(){
    int n, k; cin >> n >> k;
    int b = k - 1;
    int a = ~b & -~b;
    // cout << a << endl;
    if ((a | b)  > n) cout << b - 1 << '\n';
    else cout << b << '\n';
}

int main() {
    faster
    int t; cin >> t;
    while (t--){solve();}
}