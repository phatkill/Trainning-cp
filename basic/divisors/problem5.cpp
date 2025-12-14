/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/02, Time: 21:39:50
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define sz(x) (int)(x.size())
void solve(){
    ll n; cin >> n;
    set<int> a;
    for (int i = 2; i * i <= n; ++i){
        if (n % i == 0 && a.find(i) == a.end()){
            a.insert(i);
            n /= i;
            break;
        }
    }
    for (int i = 2; i * i <= n; ++i){
        if (n % i == 0 && a.find(i) == a.end()){
            a.insert(i);
            n /= i;
            break;
        }
    }
    a.insert(n);
    if (sz(a) == 3){
        cout << "YES" << endl;
        for (auto i: a) cout << i << " ";
        cout << endl;
    }else cout << "NO" << endl;
}
int main() {
    faster
    int t; cin >> t;
    while (t--) solve();
}