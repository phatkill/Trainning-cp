/**
problem:https://atcoder.jp/contests/abc426/tasks/abc426_d
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/18, Time: 20:54:21
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
    string s; cin >> s; s = ' ' + s;
    map<int, int> mp;
    int cnt1 = 0, cnt = 0;
    rep(i, 1, n, 1){
        cnt1 += (s[i] & 1);
        cnt = (s[i] == s[i - 1] ? cnt: 0) + 1;
        mp[s[i]] = max(mp[s[i]], cnt);
    }
    cnt = n - cnt1;
    cout << min((cnt1 - mp['1']) * 2 + cnt, (cnt - mp['0']) * 2 + cnt1) << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}