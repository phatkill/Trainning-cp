/**
problem:https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/12, Time: 20:51:01
create by: Phat Of Bug
**/
// có thể làm bằng deque

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
    int l = 1;
    ll cnt = 0;
    rep(r, 1, n, 1){
        freq[a[r]]++;
        while(sz(freq) > k){
            freq[a[l]]--;
            if (freq[a[l]] == 0) freq.erase(a[l]);
            l++;
        }
        cnt += r - l + 1;
    }
    cout << cnt;
}