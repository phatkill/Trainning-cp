/**
problem:https://codeforces.com/contest/1777/problem/C
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/13, Time: 19:30:15
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
const int N = 1e5;
vector<int> fac[N + 5];
/*
- tính số lượng các ước
- mỗi a[i] => lấy tất cả các ước a[i]
- giải như hai con trỏ bth

 */
void sieve(){
    rep(i, 1, N, 1){
        rep(j, i, N, i) fac[j].pb(i);
    }
}

void solve(){
    int n, m; cin >> n >> m;
    vector<int> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    sort(all(a));
    a.erase(unique(all(a)), a.end());
    n = sz(a) - 1;
    map<int, int> freq;
    int dist = INT_MAX;
    int l = 1;
    rep(r, 1, n, 1){
        for (auto i: fac[a[r]]){
            if (i > m) break;
            freq[i]++;
        }
        while (sz(freq) == m){
            dist = min(dist, a[r] - a[l]);
            for (auto i: fac[a[l]]){
                if (i > m) break;
                freq[i]--;
                if (freq[i] == 0) freq.erase(i);
            }
            l++;
        }
    }
    cout << (dist != INT_MAX ? dist : -1) << '\n';
}

int main() {
    faster
    sieve();
    int t; cin >> t;
    while (t--) solve();
}