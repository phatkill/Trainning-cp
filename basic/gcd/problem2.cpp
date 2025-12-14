/**
problem:https://vjudge.net/problem/HackerRank-si-lcm-and-hcf
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/03, Time: 07:41:42
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
void solve(){
    ll a, b; cin >> a >> b;
    cout << a * b / __gcd(a, b) << " " << __gcd(a, b) << endl;
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}