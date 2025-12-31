/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/28, Time: 13:55:08
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
    int n; cin >> n;
    vector<int> nt(n + 1, 1);
    function<void()> sieve =[&](){
        rep(i, 2, sqrt(n), 1) if (nt[i]) rep(j, 1ll * i * i, n, i) nt[j] = 0;
    };
    sieve();
    auto check =[&](int k){
        int cnt = 0;
        rep(i, 2, sqrt(k), 1){
            if (k % i == 0){
                if (nt[i]) cnt++;
                if (k / i != i && nt[k / i]) cnt++;
            }
        }
        return cnt == 2;
    };
    int cnt = 0;
    rep(i, 2, n, 1) cnt += check(i);
    cout << cnt;
}