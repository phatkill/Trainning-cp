/**
problem:https://cses.fi/problemset/task/3112
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/15, Time: 16:26:17
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
void solve(){
    int l = 1, r = 1e9;
    string ans;
    while (l < r){
        int mid = l + r >> 1;
        cout << "? " << mid << endl;
        cin >> ans;
        if (ans == "YES") l = mid + 1;
        else r = mid;
    }
    cout << "! " << r << endl;
}
int main() {
    faster
    int t; t = 1;
    while(t--) solve();
}