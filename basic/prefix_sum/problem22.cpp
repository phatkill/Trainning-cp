/**
problem:https://codeforces.com/problemset/problem/1945/C
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/15, Time: 17:39:47
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
    int n; string s; cin >> n >> s; s = '0' + s;
    vector<ll> pre(n + 1); rep(i, 1, n, 1) pre[i] = pre[i - 1] + (s[i] == '0');
    int pos = -1;
    int dist = INT_MAX;
    auto check =[&](int i){
        return pre[i] * 2 >= i && ((n - i) - (pre[n] - pre[i])) * 2 >= n - i && dist > abs(n - i * 2);
    };
    rep(i, 0, n, 1) if (check(i)) dist = abs(n - i * 2), pos = i;
    cout << pos << '\n';
}
int main() {
    faster
    int t; cin >> t; 
    while(t--) solve();
}