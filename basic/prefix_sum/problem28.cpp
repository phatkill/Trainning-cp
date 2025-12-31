/**
problem:https://codeforces.com/gym/105981/problem/D
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/19, Time: 17:19:45
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
    vector<ll> a(n * 2 + 1); rep(i, 1, n, 1) cin >> a[i], a[n + i] = a[i];
    vector<ll> pre(n * 2 + 1); rep(i, 1, n * 2 - 1, 1) pre[i] = pre[i - 1] + a[i];
    ll ans = 0;
    deque<int> dq;
    rep(i, 1, n * 2 - 1, 1){
        while (!dq.empty() && pre[dq.back()] >= pre[i]) dq.pop_back();
        dq.push_back(i);
        while (!dq.empty() && dq.front() <= i - n) dq.pop_front();
        if (i >= n) ans += (pre[dq.front()] >= pre[i - n]);
    }
    cout << ans << '\n';
}