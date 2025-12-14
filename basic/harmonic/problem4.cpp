/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/12, Time: 11:02:19
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
const int N = 1e6;
ll cnt[N + 5];
void solve(){
    int a, b; cin >> a >> b;
    cout << cnt[__gcd(a, b)] << '\n';
}
void sieve(){
    rep(i, 1, N, 1){
        rep(j, i, N, i) cnt[j]++;
    }
}
int main() {
    faster
    sieve();
    int t; cin >> t;
    while (t--) solve();
}