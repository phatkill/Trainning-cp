/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/30, Time: 16:53:12
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
    const int N = 1e7;
    vector<int> prime(N + 5, 1); prime[1] = prime[0] = 0;
    rep(i, 2, sqrt(N), 1) if(prime[i]) rep(j, i * i, N, i) prime[j] = 0;
    vector<int> pre(N + 1);
    rep(x, 1, sqrt(N), 1){
        rep(y, 1, N, 1){
            ll total = x * x + y * y * y * y;
            if (total > N) break;
            if (prime[total]) pre[total] = 1;
        }
    }
    rep(i, 1, N, 1) pre[i] += pre[i - 1];
    int t; cin >> t;
    while(t--) {int n; cin >> n; cout << pre[n] << '\n';}
}