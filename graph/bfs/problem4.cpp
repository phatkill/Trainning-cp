/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/31, Time: 17:54:18
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
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};
int main() {
    faster
    int n, m, k; cin >> n >> m >> k;
    vector<string> grid(n + 1); rep(i, 1, n, 1) cin >> grid[i], grid[i] = '0' + grid[i];
    int x, y;
    rep(i, 1, n, 1){
        rep(j, 1, m, 1) if (grid[i][j] == '.') x = i, y = j;
    }
    vector<vector<int>> vs(n + 1, vector<int>(m + 1));
    auto check =[&](int x, int y){
        return min(x, y) >= 1 && x <= n && y <= m && !vs[x][y] && grid[x][y] == '.';
    };
    function<void(int, int)> dfs =[&](int x, int y){
        vs[x][y] = 1;
        rep(i, 0, 3, 1){
            int X = dx[i] + x, Y = dy[i] + y;
            if (check(X, Y)) dfs(X, Y);
        }
        if (k) k--, grid[x][y] = 'X';
    };
    dfs(x, y);
    rep(i, 1, n, 1){
        rep(j, 1, m, 1) cout << grid[i][j];
        cout << '\n';
    }
    return 0;
}