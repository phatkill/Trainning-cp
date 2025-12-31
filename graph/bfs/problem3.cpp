/**
problem:https://www.spoj.com/problems/NAKANJ/
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/30, Time: 15:26:51
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
int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
void solve(){
    string s1; cin >> s1; string s2; cin >> s2;
    int x0 = s1[0] - 'a' + 1, y0 = s1[1] - '0';
    int x1 = s2[0] - 'a' + 1, y1 = s2[1] - '0';
    auto check =[&](int x, int y){
        return min(x, y) >= 1 && max(x, y) <= 8;
    };
    queue<pair<int, int>> qe;
    qe.push({x0, y0});
    map<pair<int, int>, int> dist;
    dist[{x0, y0}] = 1;
    while (!qe.empty()){
        auto [x, y] = qe.front(); qe.pop();
        if (x == x1 && y == y1) return cout << dist[{x, y}] - 1 << '\n', void();
        rep(i, 0, 7, 1){
            pair<int, int> point = {x + dx[i], y + dy[i]};
            if (check(point.first, point.second) && !dist.count(point)) dist[point] = dist[{x, y}] + 1, qe.push(point);
        }
    }
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}