/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/12, Time: 21:10:57
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

int main() {
    faster
    int n; ll k; cin >> n >> k;
    vector<ll> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    multiset<ll> ms;
    int l = 1;
    ll cnt = 0;
    rep(r, 1, n, 1){
        ms.insert(a[r]);
        while (*ms.rbegin() - *ms.begin() > k) ms.erase(ms.find(a[l++]));
        cnt += r - l + 1;
    }
    cout << cnt;
}