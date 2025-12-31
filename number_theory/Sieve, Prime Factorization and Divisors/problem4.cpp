/**
problem:https://www.spoj.com/users/mukel/
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/28, Time: 19:11:03
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
const int N = 1e8;
int main() {
    faster
    vector<bool> nt(N + 1, true);
    nt[0] = nt[1] = false;
    rep(i, 2, sqrt(N), 1) if (nt[i]) rep(j, 1ll * i * i, N, i) nt[j] = false;
    int cnt = 1; cout << "2" << '\n';
    rep(i, 3, N, 2){
        if (nt[i]) {cnt++;
        if ((cnt - 1) % 100 == 0) cout << i << '\n';}
    }
}