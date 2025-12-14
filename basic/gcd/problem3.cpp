/**
problem: https://codeforces.com/contest/1203/problem/C
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/03, Time: 07:52:25
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    faster
    int n; cin >> n;
    #define ll long long
    vector<ll> a(n + 1); for (int i = 1; i <= n; ++i) cin >> a[i];
    ll k = 0;
    for (int i = 1; i <= n; ++i) k = __gcd(a[i], k);
    int cnt = 0;
    // cout << k << endl;
    for (int i = 1; 1ll * i * i <= k; ++i){
        if (k % i == 0){
            cnt++;
            cnt += (k / i != i);
        }
    }
    cout << cnt << endl;
}