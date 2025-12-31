/**
problem:https://codeforces.com/problemset/problem/788/A
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/22, Time: 21:33:58
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
    vector<ll> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    vector<ll> b(n); rep(i, 1, n - 1, 1) b[i] = abs(a[i] - a[i + 1]);
    auto calc =[&](int coeff){
        ll sum = 0;
        ll mx = 0;
        rep(i, 0, n - 1, 1){
            sum = max(sum, 1ll* 0) + b[i] * (coeff);
            coeff *= - 1;
            mx = max(mx, sum);
        }
        return mx;
    };
    cout << max(calc(1), calc(-1)) << '\n';
}
int main() {
    faster
    int t; t = 1;
    while(t--) solve();
}