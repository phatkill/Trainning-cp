/**
problem:https://codeforces.com/problemset/problem/2149/D
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/16, Time: 19:02:53
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
void solve(){
    int n; cin >> n;
    string s; cin >> s; s = '0' + s;
    vector<int> posA, posB;
    rep(i, 1, n, 1){
        if (s[i] == 'a') posA.pb(i);
        else posB.pb(i);
    }
    auto calc =[&](vector<int> &pos){
        if (!sz(pos)) return 1ll * 0;
        vector<int> t;
        rep(i, 0, sz(pos) - 1, 1) t.pb(pos[i] - i);
        int median = t[sz(t) / 2];
        ll ans = 0;
        for (auto i: t) ans += abs(i - median);
        return ans;
    };
    cout << min(calc(posA), calc(posB)) << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}