/**
problem:https://toph.co/p/n-th-prime
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/28, Time: 18:24:28
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
const int N = 8e6;
int main() {
    faster
    int n; cin >> n;
    vector<int> prime(N + 1, 1);
    prime[0] = prime[1] = 0;
    rep(i, 2, sqrt(N), 1) if (prime[i]) rep(j, 1ll * i * i, N, i) prime[j] = 0;
    int cnt = 0;
    rep(i, 1, N, 1){
        cnt += prime[i];
        if (cnt == n) return cout << i, 0;
    }
}