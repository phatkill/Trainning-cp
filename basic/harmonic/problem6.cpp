/**
problem:https://codeforces.com/contest/1734/problem/C
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/12, Time: 15:09:28
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
    int n; cin >> n;
    string s; cin >> s; s = '0' + s;
    ll total = 0;
    rep(i, 1, n, 1){
        if (s[i] != '1'){
            if (s[i] == '0') total += i;
            rep(j, i * 2, n, i){
                if (s[j] == '1') break;
                if (s[j] == '0') total += i, s[j] = '2';
            }
        }
    }
    cout << total << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}