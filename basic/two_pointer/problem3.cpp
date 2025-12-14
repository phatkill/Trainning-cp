/**
problem:https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/08, Time: 18:26:25
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
#define per(i, a, b, k) for (ll i = a; i >= b; i -= k)

int main() {
    faster
    int n; ll s; cin >> n >> s;
    vector<ll> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    int l = 1;
    int mn = INT_MAX;
    ll sum = 0;
    rep(r, 1, n, 1){
        sum += a[r];
        while (sum >= s){
            mn = min(mn, r - l + 1);
            sum -= a[l++];
        }
    }
    cout << (mn == INT_MAX ? -1 : mn);
}