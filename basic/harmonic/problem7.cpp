/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/12, Time: 16:07:23
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
    int n; char c; cin >> n >> c;
    string s; cin >> s; s = '0' + s;
    int flag = 1;
    rep(i, 1, n, 1) if (s[i] != c) flag = 0;
    if (flag) return cout << 0 << '\n', void();
    rep(i, n / 2 + 1, n, 1){
        if (s[i] == c) return cout << 1 << '\n' << i << '\n', void();
    }
    cout << 2 << '\n';
    cout << n - 1 << ' ' << n << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}