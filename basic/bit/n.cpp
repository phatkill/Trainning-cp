/**
problem:
Một niệm nghịch thiên — muôn kế diệt vong
Date: 2025/11/01, Time: 21:11:43
create by: Phat Of Bug
**/

#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
struct Val{
    ll val; int cnt4, cnt7;
};
int main() {
    faster
    ll n; cin >> n;
    ll ans = 1e11;
    stack<Val> st;
    st.push({0, 0, 0});
    while (!st.empty()){
        auto [val, cnt4, cnt7] = st.top(); st.pop();
        if (val > ans) continue;
        if (cnt4 == cnt7 && val >= n) ans = min(ans, val);
        else{
            st.push({val * 10 + 4, cnt4 + 1, cnt7});
            st.push({val * 10 + 7, cnt4, cnt7 + 1});
        }
    }
    cout << ans << endl;
}