/**
problem:https://codeforces.com/problemset/problem/1389/A
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/03, Time: 09:01:21
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve(){
    #define ll long long
    ll l, r; cin >> l >> r;
    if (l * 2 > r) cout << -1 << " " << -1 << '\n';
    else cout << l << " " << l * 2 << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}