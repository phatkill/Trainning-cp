/**
problem:https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/19, Time: 20:47:44
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
    ll n, x, y; cin >> n >> x >> y;
    ll total = min(x, y); n--;
    ll l = 0, r = max(x, y) * n;
    auto calc =[&](ll mid){
        return mid / x + mid / y >= n;
    };
    while (l < r){
        ll mid = l + r >> 1;
        if (calc(mid)) r = mid;
        else l = mid + 1;
    }
    cout << total + l << endl;
}