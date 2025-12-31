/**
problem:https://www.hackerrank.com/contests/5-days-of-game-theory/challenges/tower-breakers/problem
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/27, Time: 15:26:09
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
void solve(){
    int n, m; cin >> n >> m;
    if (m == 1 || (!(n & 1))) cout << 2 << '\n'; else cout << 1 << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}