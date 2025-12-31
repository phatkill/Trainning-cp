/**
problem:https://codeforces.com/contest/242/problem/C
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/29, Time: 14:33:19
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
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int main() {
    faster
    int x0, y0, x1, y1; cin >> x0 >> y0 >> x1 >> y1;
    int n; cin >> n;
    map<pair<int, int>, int> dist;
    rep(i, 1, n, 1){
        int r, a, b; cin >> r >> a >> b;
        rep(j, a, b, 1) dist[{r, j}] = 0;
    }
    queue<pair<int, int>> qe;
    dist[{x0, y0}] = 1;
    qe.push({x0, y0});
    while (!qe.empty()){
        auto [x, y] = qe.front(); qe.pop();
        if (x == x1 && y == y1) return cout << dist[{x1, y1}] - 1 << '\n', 0;
        rep(i, 0, 7, 1){
            pair<int, int> v = {dx[i] + x, dy[i] + y};
            if (dist.count(v) && !dist[v]) dist[v] = dist[{x, y}] + 1, qe.push(v);
        }
    }
    cout << -1;

}