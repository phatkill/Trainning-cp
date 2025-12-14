/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/11, Time: 14:26:38
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
    int n, k; cin >> n >> k;
    vector<ll> a(n + 1); rep(i, 1, n, 1) cin >> a[i];
    map<ll, int> freq;
    ll sum = 0, mx = 0;
    int l = 1;
    rep(r, 1, n, 1){
        sum += a[r];
        freq[a[r]]++;
        while (sz(freq) > k){
            freq[a[l]]--;
            if (freq[a[l]] == 0) freq.erase(a[l]);
            sum -= a[l++];
        }
        mx = max(mx, sum);
    }
    cout << mx;
}