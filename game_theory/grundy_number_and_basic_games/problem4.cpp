/**
problem:https://cses.fi/problemset/task/1729
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/30, Time: 16:30:47
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
    int n, k; cin >> n >> k;
    vector<int> a(k + 1); rep(i, 1, k, 1) cin >> a[i];
    sort(all(a));
    vector<int> state(n + 1);
    rep(i, 1, n, 1){
        rep(j, 1, k, 1){
            if (i >= a[j]) state[i] += (!state[i - a[j]]);
        }
    }
    rep(i, 1, n, 1) cout << (state[i] ? 'W': 'L');
}