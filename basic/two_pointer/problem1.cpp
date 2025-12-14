/**
problem:https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/08, Time: 18:17:32
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
    int n, m; cin >> n >> m;
    vector<int> a(n + 1), b(m + 1);
    rep(i, 1, n, 1) cin >> a[i];
    rep(i, 1, m, 1) cin >> b[i];
    int i = 1, j = 1;
    while (i <= n || j <= m){
        if (j > m || (i <= n && a[i] <= b[j])) cout << a[i++] << ' ';
        else cout << b[j++] << " ";
    }
}