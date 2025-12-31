/**
problem:https://codeforces.com/contest/1621/problem/C
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/19, Time: 15:48:46
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
int query(int i){
    cout << "? " << i << endl;
    int ans; cin >> ans;
    return ans;
}
void solve(){
    int n; cin >> n;
    vector<int> p(n + 1);
    rep(i, 1, n, 1){
        if (p[i]) continue;
        int prev = query(i);
        while (true){
            int curr = query(i);
            p[prev] = curr;
            prev = curr;
            if (p[curr]) break;
        }
    }
    cout << "! "; rep(i, 1, n, 1) cout << p[i] << ' ';
    cout << endl;
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}