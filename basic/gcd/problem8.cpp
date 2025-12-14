/**
problem:https://codeforces.com/problemset/problem/1543/A
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/03, Time: 09:36:20
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
void solve(){
    ll a, b; cin >> a >> b;
    ll k = gcd(a + b, b);
    if (a == b) cout << "0 0" << '\n';
    else{
        ll g = abs(a - b);
        cout << g << " " << min(a % g, g - a % g) << '\n';
    }
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}