/**
problem:https://codeforces.com/contest/2125/problem/B
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/03, Time: 08:33:28
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
void solve(){
    ll a, b, k; cin >> a >> b >> k;
    ll g = gcd(a, b); // so lan di dai nhat de toi duoc a va toi duoc b cung luc
    if (max(a, b) / g <= k) cout << 1 << '\n';
    else cout << 2 << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}