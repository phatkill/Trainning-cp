/**
problem:https://cses.fi/problemset/task/2422
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/19, Time: 18:44:24
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
    ll n; cin >> n;
    ll k = n * n + 1 >> 1;
    ll l = 1, r = n * n;
    auto calc =[&](ll mid){
        ll sum = 0;
        rep(i, 1, n, 1) sum += min(n, mid / i);
        return sum >= k;
    };
    while (l < r){
        ll mid = l + r >> 1;
        if (calc(mid)) r = mid;
        else l = mid + 1;
    }
    cout << r;
}