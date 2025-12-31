/**
problem:https://www.hackerrank.com/contests/5-days-of-game-theory/challenges/day-1-a-chessboard-game/problem
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/29, Time: 15:41:57
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
int dx[] = {-2, -2, 1, -1};
int dy[] = {1, -1, -2, -2};
void solve(){
    int x, y; cin >> x >> y;
    vector<vector<int>> memo(16, vector<int>(16, -1));
    auto check =[&](int x, int y){ return min(x, y) >= 1 && max(x, y) <= 15;};
    function<int(int, int)> calc =[&](int x, int y){
        if (memo[x][y] != -1) return memo[x][y];
        memo[x][y] = 0;
        rep(i, 0, 3, 1){
            int X = dx[i] + x, Y = dy[i] + y;
            if (check(X, Y) && !calc(X, Y)) memo[x][y] = 1;
        }
        return memo[x][y];
    };
    if (calc(x, y)) cout << "First";
    else cout << "Second";
    cout << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}