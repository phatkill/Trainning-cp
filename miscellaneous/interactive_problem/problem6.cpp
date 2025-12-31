/**
problem:https://codeforces.com/problemset/problem/1486/C1
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/12/17, Time: 16:22:43
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
    auto calc =[&](int l, int r){
        int ans;
        cout << "? " << l << " " << r << endl;
        cin >> ans;
        return ans;
    };
    int n; cin >> n;
    int l = 1, r = n;
    int k = calc(l, r);
    if (k > 1 && calc(l, k) == k){
        r = k - 1;
        while (l < r){
            int mid = l + r + 1 >> 1;
            if (calc(mid, k) == k) l = mid;
            else r = mid - 1;
        }
    }else{
        l = k + 1;
        while(l < r){
            int mid = l + r >> 1;
            if (calc(k, mid) == k) r = mid;
            else l = mid + 1;
        }
    } 
    cout << "! " << l << endl;
}