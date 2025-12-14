/**
problem:https://www.codechef.com/problems/SUPER_HERO
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/14, Time: 14:15:45
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define pb push_back
#define rep(i, a, b, k) for (int i = a; i <= b; i += k)
#define per(i, a, b, k) for (int i = a; i >= b; i -= k)
// tinh tong so luong uoc + => rut tung thanh phan la bo tung uoc nguyen to
void solve(){
    int h; ll k; cin >> h >> k;
    ll cnt = log2(k);
    rep(i, 2, sqrt(h), 1){
        while (h % i == 0) h /= i, cnt++;
    }
    if (h > 1) cnt++;
    cout << cnt << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}