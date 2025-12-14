/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/02, Time: 21:25:58
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define pb push_back
#define sz(a) (int)(a.size())
#define all(a) a.begin(), a.end()
int main() {
    faster
    ll n; int k; cin >> n >> k;
    vector<ll> div;
    for (int i = 1; 1ll * i * i <= n; ++i){
        if (n % i == 0){
            div.pb(i);
            if (n / i != i) div.pb(n / i);
        }
    }
    sort(all(div));
    // reverse(all(div));
    if (sz(div) < k) cout << -1;
    else cout << div[k - 1];
}