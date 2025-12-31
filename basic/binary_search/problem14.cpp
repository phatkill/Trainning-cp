/**
problem:https://codeforces.com/contest/600/problem/B
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/21, Time: 19:00:26
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define sz(x) int(x.size())
#define all(x) x.begin() + 1, x.end()
#define pb push_back
#define rep(i, a, b, k) for (int i = a; i <= b; i += k)
#define per(i, a, b, k) for (int i = a; i >= b; i -= k)

int main() {
    faster
    int n, m; cin >> n >> m;
    vector<int> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    sort(all(a));
    rep(i, 1, m, 1){
        int x; cin >> x;
        cout << (upper_bound(all(a), x) - a.begin() - 1) << ' ';
    }
}