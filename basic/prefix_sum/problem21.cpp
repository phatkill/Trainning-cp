/**
problem:https://www.codechef.com/problems/VOLCANO?tab=statement
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/22, Time: 10:04:53
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define pb push_back
#define INF INT_MAX
void solve(){
    ll n, p; cin >> n >> p;
    ll total = 0;
    vector<ll> a(n + 1); for (int i = 1; i <= n; ++i) cin >> a[i];
    vector<ll> pre(n + 1, INF), suf(n + 2, INF);
    for (int i = 1; i <= n; ++i){
        if (a[i] == 0) pre[i] = 0;
        else pre[i] = max(pre[i - 1], a[i]);
    }
    for (int i = n; i >= 1; --i){
        if (a[i] == 0) suf[i] = 0;
        else suf[i] = max(a[i], suf[i + 1]);
    }
    // for (int i = 1; i <= n; ++i) cout << pre[i] << " " << suf[i] << '\n';
    for (int i = 1; i <= n; ++i) cout << (min(pre[i], suf[i]) + p - 1) / p << " ";
    cout << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}

/*
idea:
xet loang tu ben trai, ben phai qua vi tri i. Neu khong co dung nham => INF
*/