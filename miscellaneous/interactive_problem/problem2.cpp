/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/15, Time: 16:36:11
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
    int l = 1, r = 1e6;
    string ans;
    while (l < r){
        int mid = l + r + 1 >> 1;
        cout << mid << endl;
        cin >> ans;
        if (sz(ans) == 1 ) l = mid;
        else r = mid - 1;
    }
    cout << "! " << r << endl;
}