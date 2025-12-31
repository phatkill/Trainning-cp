/**
problem:https://www.spoj.com/problems/VECTAR8/
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/29, Time: 16:20:11
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
const int N = 1e6;
int main() {
    faster
    vector<int> nt(N + 1, 1), cntPr(N + 1);
    nt[0] = nt[1] = 0;
    rep(i, 2, sqrt(N), 1) if (nt[i]) rep(j, i * i, N, i) nt[j] = 0;
    auto calc =[&](int k){
        ll pow = 10;
        if (!nt[k]) return 0;
        while (pow <= k){
            if (!nt[k % pow]) return 0;
            pow *= 10;
        }
        while (k){
            if (k % 10 == 0) return 0;
            k /= 10;
        }
        return 1;
    };
    rep(i, 1, N, 1) cntPr[i] = cntPr[i - 1] + calc(i);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        cout << cntPr[n] << '\n';
    }
}