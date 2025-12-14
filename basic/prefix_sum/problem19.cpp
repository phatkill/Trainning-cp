/**
problem:https://usaco.org/index.php?page=viewproblem2&cpid=595
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/19, Time: 10:36:20
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define file(name) freopen(name".in", "r", stdin); freopen(name".out", "w", stdout);
int main() {
    file("div7")
    faster
    int n; cin >> n;
    #define ll long long
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i], a[i] += a[i - 1];
    map<ll, int> mp;
    int cnt = 0;
    mp[0] = 0;
    for (int i = 1; i <= n; ++i){
        int sum = a[i] % 7;
        if (mp.find(sum) != mp.end()) cnt = max(cnt, i - mp[sum]);
        else mp[sum] = i;
    }
    cout << cnt;
}

