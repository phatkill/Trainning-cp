/**
problem:https://codeforces.com/contest/2020/problem/B
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/20, Time: 20:33:31
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
    ll k; cin >> k;
    auto calc =[&](ll mid){
        return mid - int(sqrt(mid)) >= k;
    };
    ll l = 1, r = 2e18;
    while (l < r){
        ll mid = l + r >> 1;
        if (calc(mid)) r = mid; 
        else l = mid + 1;
    }
    cout << r << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while(t--) solve();
}