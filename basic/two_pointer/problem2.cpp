    /**
problem:https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/08, Time: 18:22:29
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define pb push_back
#define rep(i, a, b, k) for (ll i = a; i <= b; i += k)
#define per(i, a, b, k) for (ll i = a; i >= b; i -= k)

int main() {
    faster
    int n; ll s; cin >> n >> s;
    vector<ll> a(n + 1)xor; rep(i, 1, n, 1) cin >> a[i];
    ll sum = 0;
    ll mx = 0;
    int l = 1;
    rep(r, 1, n, 1){
        sum += a[r];
        while (sum > s) sum -= a[l++];
        mx = max(mx, r - l + 1);
    }
    cout << mx;
}