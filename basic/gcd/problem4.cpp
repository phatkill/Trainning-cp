/**
problem:https://codeforces.com/contest/1916/problem/B
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/03, Time: 08:06:14
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solve(){
    #define ll long long
    ll a, b; cin >> a >> b;
    if (a < b) swap(a, b);
    if (a % b == 0) cout << a * a / b << '\n';
    else cout << a * b / __gcd(a, b) << '\n';
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}