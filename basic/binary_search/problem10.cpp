/**
problem:https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/E
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/19, Time: 20:57:51
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
    double c; cin >> c;
    double l = 0, r = 1e5;
    auto calc =[&](double mid){
        return mid * mid + sqrt(mid) >= c;
    };
    rep(i, 1, 100, 1){
        double mid = (l + r) / 2;
        if (calc(mid)) r = mid;
        else l = mid;
    }
    cout << fixed << setprecision(12) << l << endl;
}