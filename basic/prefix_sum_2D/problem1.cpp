/**
problem:https://cses.fi/problemset/task/1652
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/25, Time: 18:43:43
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
    int n, q; cin >> n >> q;
    vector<string> grid(n + 1); rep(i, 1, n, 1) cin >> grid[i], grid[i] = ' ' + grid[i];
    vector<vector<int>> pre(n + 1, vector<int>(n + 1));
    rep(i, 1, n, 1){
        rep(j, 1, n, 1) pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + (grid[i][j] == '*');
    }
    rep(i, 1, q, 1){
        int y1, x1, y2, x2; cin >> y1 >> x1 >> y2 >> x2;
        cout << pre[y2][x2] - pre[y2][x1 - 1] - pre[y1 - 1][x2] + pre[y1 - 1][x1 - 1] << '\n';
    }
}