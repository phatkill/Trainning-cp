/**
problem:https://codeforces.com/gym/106020/problem/H
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/15, Time: 19:04:19
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
    int n; cin >> n;
    vector<ll> a(n + 2); rep(i, 1, n, 1) cin >> a[i];
    a[n + 1] = 1e9;
    auto calc =[&](int k){
        ll ans = 0;
        int l = 0;
        vector<int> pos;
        rep(i, 1, n + 1, 1){
            if (a[i] >= k){
                pos.pb(i); // vach ngan
                rep(j, 0, sz(pos) - 3, 1){
                    int x1 = pos[j], x2 = pos[j + 1], r = pos[j + 2];
                    if (a[x1] + a[x2] == k){
                            ans += 1ll * (x1 - l) * (r - x2);
                            if (x2 == x1 + 1) ans--;
                    }
                    l = x1;
                }
                l = i;
                pos.clear();
            }else if (a[i] > 0) pos.pb(i);
        }
        return ans;
    };
    cout << calc(2) + calc(3) << '\n';
}