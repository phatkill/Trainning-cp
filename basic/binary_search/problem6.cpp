/**
problem:https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/19, Time: 18:36:57
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

int main() {
    faster
    ll w, h, n; cin >> w >> h >> n;
    ll l = 1, r = max(w, h) * n;
    auto calc =[&](ll mid){
        if (log(mid / w) + log(mid / h) >= log(1e9)) return true;
        return (mid / w) * (mid / h) >= n;
    };
    while (l < r){
        ll mid = l + r >> 1;
        if (calc(mid)) r = mid;
        else l = mid + 1;
    }
    cout << l;
}