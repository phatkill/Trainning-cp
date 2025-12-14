/**
problem:https://codeforces.com/problemset/problem/1732/A
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/03, Time: 09:18:35
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve(){
    int n; cin >> n;
    vector<int> a(n + 1); int g = 0;
    for (int i = 1; i <= n; ++i) cin >> a[i], g = __gcd(g, a[i]);
    if (g == 1) cout << 0 << '\n';
    else if (__gcd(g, n) == 1) cout << 1 << '\n';
    else if (__gcd(g, n - 1) == 1) cout << 2 << '\n';
    else cout << 3 << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}